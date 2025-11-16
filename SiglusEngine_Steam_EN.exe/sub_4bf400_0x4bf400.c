// 函数: sub_4bf400
// 地址: 0x4bf400
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (arg2 != 0)
    *arg2 = 0

if (arg4 != 0)
    *arg4 = 0

if (arg5 != 0)
    *arg5 = 0

if (arg6 != 0)
    *arg6 = 0

uint32_t mciId = data_1bfe268

if (mciId != 0xffffffff)
    if (arg6 != 0)
        *arg6 = sub_4bf250(arg3)
        mciId = data_1bfe268
    
    int32_t var_10_1 = 0
    int64_t dwParam2_1 = 0
    dwParam2_1:4.d = 0xa
    mciSendCommandA(mciId, 0x80d, 0x402, &dwParam2_1)
    int128_t dwParam2 = zx.o(0)
    dwParam2:0xc.d = arg3
    dwParam2:8.d = 1
    uint32_t eax_5 = mciSendCommandA(data_1bfe268, 0x814, 0x112, &dwParam2)
    int32_t edx = dwParam2:4.d
    uint32_t esi_1 = zx.d(edx.b)
    mciId = zx.d((edx u>> 0x10).b)
    uint32_t ecx_2 = zx.d((edx u>> 8).b)
    
    if (mciId s>= 0xf)
        mciId -= 0xf
    else if (ecx_2 s>= 1)
        ecx_2 -= 1
        mciId += 0x3c
    else if (esi_1 s>= 1)
        esi_1 -= 1
        ecx_2 = 0x3b
        mciId += 0x3c
    
    if (eax_5 == 0)
        if (arg2 != 0)
            *arg2 = esi_1
        
        if (arg4 != 0)
            *arg4 = ecx_2
        
        if (arg5 != 0)
            *arg5 = mciId

sub_5f02dd(eax_1 ^ &__saved_ebp)
return mciId
