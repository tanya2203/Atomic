// int findKRotation(vector<int> &arr){
//   //find pivot elment

  
//   int s = 0;
//     int e = arr.size() - 1;
//     int mid = (s + ((e - s) / 2));
//     while (s <= e) // not eqal
//     {

//         // if (arr[mid] == key)
//         // {
//         //     return mid;
//         // }
//         // greater
//         if (arr[mid] >= arr[0])        //differnece idhar
//         {
//             s = mid + 1;
//         }

//         // smaller
//         else
//         {
//             e = mid-1;
//         }
//         if(s==arr.size()){
//             return 0;
//         }
//         mid = (s + ((e - s) / 2));
//     }

//     return s; // or s    
// }`