# C++ 알고리즘 공부

## endl과 \n

- `endl`은 버퍼를 비우므로 속도가 느리다.
- `\n` 버퍼를 비우지 않는다. 속도가 빠르다.

## cin과 scanf

- `cin`보다 `scanf`는 시간 수행시간이 짧다. `cin`을 사용했을 때 시간초과가 날 수 있다.
- `scanf`는 입력의 단위를 공백으로 구분한다.
  되도록이면 `cin`보다는 `scanf`을 사용하자!!

## Map

- Map은 key값으로 정렬

## max,min

- 3개 이상 비교할 경우에는 max({1,2,3});
- minmax 한 번에 구하는 것도 가능
  > pair<int, int> mm = minmax({ a, b, c, d, e });<br/>cout << mm.first << mm.second ;
