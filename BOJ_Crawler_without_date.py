from datetime import *
from html.parser import HTMLParser
import clipboard
import requests
from bs4 import BeautifulSoup
import os
 
def createFolder(directory):
    try:
        if not os.path.exists(directory):
            os.makedirs(directory)
    except OSError:
        print ('Error: Creating directory. ' +  directory)
 

if __name__ == '__main__':
    input_problem_num = input("문제 번호 입력 : ")
    
    createFolder(input_problem_num)
    
    url = f"https://www.acmicpc.net/problem/{input_problem_num}"

    request_headers = { 
    'User-Agent' : ('Mozilla/5.0 (Windows NT 10.0;Win64; x64)\
    AppleWebKit/537.36 (KHTML, like Gecko) Chrome/71.0.3578.98\
    Safari/537.36'), } 

    response = requests.get(url, headers = request_headers).text
    data = BeautifulSoup(response, 'html.parser')

    problem_title = data.select_one('#problem_title').text


    txt = f"""
<h1>[BOJ #{input_problem_num}] {problem_title}
"""

    result = f"{txt}"

    now = str(datetime.now())

    date_now = f"{now[:10]}"

    txt = f"""
<h2>Study date: {date_now}
"""

    result = f"{result}\n{txt}"


    txt = f"""
## 문제 출처

[BAEKJOON Online Judge #{input_problem_num}]({url})

"""

    result = f"{result}\n{txt}"

    problem_description = data.select_one('#problem_description').text

    txt = f"""
## 문제

{problem_description}

<br>
"""

    result = f"{result}\n{txt}"

    problem_input = data.select_one('#problem_input').text

    if problem_input == "":
        problem_input == "없음"

    txt = f"""
## 입력

{problem_input}

<br>
"""

    result = f"{result}\n{txt}"

    problem_output = data.select_one('#problem_output').text

    if problem_output == "":
        problem_output == "없음"

    txt = f"""
## 출력

{problem_input}

<br>
"""

    result = f"{result}\n{txt}"

    problem_limit = data.select_one('#problem_limit').text

    if len(problem_limit) == 1:
        txt = ""
    else:
        txt = f"""

## 제한

{problem_limit}

<br>
"""

    result = f"{result}{txt}"

    sampledata_list = []
    cnt = 0

    for cnt in range(0, 20):
        try:
            sampledata = data.select('.sampledata')[cnt].text

        except:
            break

        else:
            sampledata_list.append(sampledata)

    # input 데이터 리스트 저장
    sampledata_list_input = [
        item for item in sampledata_list if sampledata_list.index(item) % 2 == 0]

    # output 데이터 리스트 저장
    sampledata_list_output = [
        item for item in sampledata_list if sampledata_list.index(item) % 2 == 1]

    sampletxt = ""

    for i in range(0, len(sampledata_list_input)):
        if sampledata_list_input[i] == "":
            sampledata_list_input[i] = "없음"

        inout_ex = f"""
입력

```python
{sampledata_list_input[i]}
```

<br>

출력

```python
{sampledata_list_output[i]}
```

<br>

"""

        if len(sampledata_list_input) == 1:
            a = f"""
{inout_ex}
"""

        else:
            a = f"""
### 예제 {i + 1}

{inout_ex}
"""

        sampletxt = f"{sampletxt}{a}"


    txt = f"""
## 예제
{sampletxt}
"""

    result = f"{result}\n{txt}"
    
    createFolder(input_problem_num+"/testcase")
    createFolder(input_problem_num+"/answer")

    for i in range(0, len(sampledata_list_input)):
        file = open(input_problem_num+"/testcase/test"+str(i)+".txt", "w")
        file.write(sampledata_list_input[i])
        file.close()

    for i in range(0, len(sampledata_list_input)):
        file = open(input_problem_num+"/answer/answer"+str(i)+".txt", "w")
        file.write(sampledata_list_output[i])
        file.close()
    
    
    #file 저장
    file = open(input_problem_num+"/Description.md", "w")
    file.write(result)
    file.close()

    print("복사가 완료되었습니다!")
