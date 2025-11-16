// 函数: sub_4bf1e0
// 地址: 0x4bf1e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
uint32_t mciId = data_1bfe268

if (mciId == 0xffffffff)
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return 0x20c

int128_t dwParam2 = zx.o(0)
dwParam2:8.d = 4
uint32_t eax_3 = mciSendCommandA(mciId, 0x814, 0x102, &dwParam2)
int32_t result = dwParam2:4.d

if (eax_3 != 0)
    result = 0x20c

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
