// 函数: sub_4bf250
// 地址: 0x4bf250
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
uint32_t mciId = data_1bfe268

if (mciId != 0xffffffff)
    int128_t dwParam2 = zx.o(0)
    dwParam2:0xc.d = arg1
    dwParam2:8.d = 0x4001
    
    if (mciSendCommandA(mciId, 0x814, 0x112, &dwParam2) == 0 && dwParam2:4.d == 0x440)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return 1

sub_5f02dd(eax_1 ^ &__saved_ebp)
return 0
