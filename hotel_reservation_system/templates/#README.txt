[users-template]
user_type => [0 => admin | 1 => normal user]


[rooms-template]
from, to => [11, 12, 13, 21, 22, 23, 31, 32, 33 .... 72, 73]
*first digit from left represents day  [1 => Saturday | 2 => Sunday | 3 => Monday ... | 7 => Friday]
*second digit from left represents time of day  [1 => Morning | 2 => Afternoon | 3 => Evening]

roomType => [1 => Single | 2 => Double | 3 => Triple | 4 => Quad | 5 => Suite | 6 => Deluxe]

[bookings-template]
active => [0 => true | 1 => false]



Error code

300 => Session File Found But No user_id and login_data found
304 => User Not Found