// 函数: sub_4bec90
// 地址: 0x4bec90
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t var_48 = arg1 + 0x61
int128_t dwParam2
__builtin_memset(&dwParam2, 0, 0x14)
dwParam2:8.d = "cdaudio"
void var_14
sub_4c84d0(&var_14, "%c:")
dwParam2:0xc.d = &var_14

if (mciSendCommandA(0, 0x803, 0x2302, &dwParam2) == 0)
    uint32_t mciId = dwParam2:4.d
    
    if (mciId != 0xffffffff)
        int128_t dwParam2_1 = zx.o(0)
        dwParam2_1:8.d = 5
        mciSendCommandA(mciId, 0x814, 0x102, &dwParam2_1)
        
        if (dwParam2_1:4.d == 1 && sub_4bf2d0(mciId) s> 0)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return mciId
        
        dwParam2_1:0xc.d = 0
        dwParam2_1:4.q = 0
        mciSendCommandA(mciId, 0x804, 2, &dwParam2_1:4)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return 0xffffffff
