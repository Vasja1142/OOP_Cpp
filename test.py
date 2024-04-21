import time

import vk_api


session = vk_api.VkApi(token="vk1.a.SH12ZyciA6cBXzj1kUjPLvoUH5ADEl_TY78qFSU0px7Yvtk4DsYmX2x6cQMrPSsZd2j_xVBeT6UbfaXlYIpbhd9TsjC6YzgFR_GBia-t55M1rCPsXX72VPJsYi2HeaFtp1gq_yXPGUzCeruojqDoUMlJxuD_RW2vDaLBAny_HEsu1T2pYJrbB4fBfslX6yJOHtfLDVb0ybKDMw_cfNU08w")
vk = session.get_api()

friends_list = vk.friends.get(order='hints')['items']
friends_names = vk.users.get(user_ids=", ".join(map(str, friends_list)))

total = 0
for friend in friends_names:
    count = vk.messages.getHistory(peer_id=friend["id"])["count"]
    total += count
    print(f'{friend["first_name"]} {friend["last_name"]}: {count}')

    time.sleep(0.5)
print(total)