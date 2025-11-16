// 函数: sub_45e980
// 地址: 0x45e980
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
*arg1 = data_7037a8
arg1[1] = data_7037ac
arg1[2] = data_7037b0 + 1
bool cond:0 = *arg1 s>= 0
arg1[3] = data_7037b4 + 1

if (not(cond:0))
    *arg1 = 0

if (arg1[1] s< 0)
    arg1[1] = 0

int32_t eax_8 = data_70300c

if (arg1[2] s> eax_8)
    arg1[2] = eax_8

int32_t eax_9 = data_7030dc

if (arg1[3] s> eax_9)
    arg1[3] = eax_9

if (*arg1 s> arg1[2] || arg1[1] s> arg1[3])
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return 0

RECT rect
GetClientRect(data_7027bc, &rect)
POINT point
point.x = rect.left
point.y = rect.top
ClientToScreen(data_7027bc, &point)
int32_t y = point.y
int32_t x = point.x
arg1[1] += y
*arg1 += x
arg1[2] += x
arg1[3] += y
sub_5f02dd(eax_1 ^ &__saved_ebp)
return 1
