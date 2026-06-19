# Summary

## Objective
C언어로 두 정수를 입력받아 덧셈 결과를 출력하는 프로그램을 작성한다.

## Changes Made
- `add.c` 파일 신규 생성
  - `add(int a, int b)` 함수: 두 정수의 합을 반환
  - `main()` 함수: 사용자로부터 두 정수를 입력받아 `add()` 호출 후 결과 출력

## Modified Files
| 파일 | 변경 유형 |
|------|-----------|
| `add.c` | 신규 생성 |

## Analysis
- `add()` 함수를 `main()`과 분리하여 단일 책임 원칙을 적용
- `scanf`로 표준 입력을 받아 범용적으로 사용 가능
- `int` 범위 내 덧셈이므로 오버플로우는 입력값에 따라 주의 필요

## Expected Impact
- 기존 `main.c`에 영향 없음
- 덧셈 연산 예제 코드가 독립 파일로 추가됨

## Risks
- `int` 범위(±2,147,483,647)를 초과하는 입력 시 오버플로우 발생 가능
- `scanf` 사용 시 비정수 입력에 대한 예외 처리 없음

## Verification
```bash
gcc add.c -o add && echo "5 3" | ./add
```
예상 출력: `5 + 3 = 8`

## Next Steps
- 입력 유효성 검사 추가 고려
- `long long` 타입으로 확장하여 큰 수 처리 가능하도록 개선 가능
