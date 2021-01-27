
var bridge_length;
var weight;
var truck_weights;
function solution(bridge_length, weight, truck_weights) {
    var cnt = 0,sum=0;
    var queue=[];
    for(var i=0;i<truck_weights.length;i++){
        while(true){ 
            if(queue.length==0){
                queue.push(truck_weights[i]);
                cnt++;
                sum+=truck_weights[i];
                break;
            }
            else if(queue.length == bridge_length){
                sum -=queue.shift();
            }
            else{
                if(sum + truck_weights[i] > weight) {
                    queue.push(0);
                    cnt++;
                }
                else{
                    queue.push(truck_weights[i]);
                    cnt++;
                    sum += truck_weights[i];
                    break;
                }
            }
        }
    }
    cnt +=bridge_length;
    return cnt;
}
console.log(solution(2,10,[7,4,5,6]));