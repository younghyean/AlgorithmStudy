function solution(priorities, location) {
    let answer = 0;
    let Print =priorities.map((v,i) => ({value:v, index: i}));
    let resultPrint=[];
 
    while(Print.length>0){
        let waitPrint = Print[0].value;
        if (Print.some((v, i) => v.value > waitPrint)) {
            Print.push(Print.shift());
        }
        else{
            resultPrint.push(Print.shift());
        }
    }   
    answer = resultPrint.findIndex(v => v.index === location ) +1;
    return answer;
}
console.log(solution([1, 1, 9, 1, 1, 1],0));