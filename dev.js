
function solution(progresses, speeds) {
    var answer = [];
    var day=[];
    var index=0;
    for(var i=0;i<progresses.length;i++){
        var temp=100-progresses[i];
        temp%speeds[i] ==0 ? temp/=speeds[i] :temp=parseInt(temp/speeds[i]) +1; 
        day.push(temp);
    }
    while(true){
        if(index==day.length){
            answer.push(count);
            break;
        }
        var count=1;
        for(var j=index+1;j<day.length;j++){
            if(day[index]<day[j]){
                answer.push(count);
                break;
            }
            else{
                count ++;
            }
        }
        index=j;
    }
    return answer;
}
console.log(solution([93, 30, 55],[1, 30, 5]));