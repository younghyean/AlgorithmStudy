// var array=[1, 15, 2, 6, 3, 7, 4];
// var commands=[[2, 5, 3], [4, 4, 1], [1, 7, 3]];

// let temp= array.sort();
// console.log(temp);

// function solution(array, commands) {
//     let answer = [];
//     for(let i=0;i<commands.length;i++){
//         let arraytemp=commands[i];
//         //let temp= array.slice(arraytemp[0]-1,arraytemp[1]).sort()[arraytemp[2]];
//         let temp= array.slice(arraytemp[0]-1,arraytemp[1]).sort((a,b)=>{return a-b})[arraytemp[2]-1];
//         answer.push(temp);
        
//     }
//     console.log(answer) ;
// }

var items = [
    { name: 'Edward', value: 41 },
    { name: 'sharpe', value: 37 },
    { name: 'And', value: 45 },
  ];
  
  // 이름 기준으로 내림차순 정렬
  items.sort((a, b) => {
    var nameA = a.name.toUpperCase(); // ignore upper and lowercase
    var nameB = b.name.toUpperCase(); // ignore upper and lowercase
    return nameA > nameB ? -1 : nameA < nameB ? 1 :0;
    }
     );
  console.log(items);

