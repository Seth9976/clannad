// 函数: sub_4bf530
// 地址: 0x4bf530
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (arg3 != 0)
    *arg3 = 0

if (arg2 != 0)
    *arg2 = 0

if (arg4 != 0)
    *arg4 = 0

if (arg5 != 0)
    *arg5 = 0

uint32_t mciId_1 = data_1bfe268

if (mciId_1 != 0xffffffff && data_1bfe264 != 0)
    int32_t var_c_1 = 0
    int64_t dwParam2_1 = 0
    dwParam2_1:4.d = 0xa
    mciSendCommandA(mciId_1, 0x80d, 0x402, &dwParam2_1)
    uint32_t mciId = data_1bfe268
    int128_t dwParam2 = zx.o(0)
    dwParam2:8.d = 2
    
    if (mciSendCommandA(mciId, 0x814, 0x102, &dwParam2) == 0)
        int32_t ecx = dwParam2:4.d
        
        if (arg3 != 0)
            *arg3 = zx.d(ecx.b)
        
        if (arg2 != 0)
            *arg2 = zx.d((ecx u>> 8).b)
        
        if (arg4 != 0)
            *arg4 = zx.d((ecx u>> 0x10).b)
        
        if (arg5 != 0)
            *arg5 = ecx u>> 0x18
        
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return 1

sub_5f02dd(eax_1 ^ &__saved_ebp)
return 0
