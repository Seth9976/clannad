// 函数: sub_4bf650
// 地址: 0x4bf650
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
WaitForSingleObject(data_641b34, 0xffffffff)
sub_4bf970()
sub_4bee00()
int32_t esi = arg6
int32_t var_3c
int32_t var_38
int32_t eax_2
int32_t edi

if (esi != 0)
    edi = arg7
    var_38 = arg9
    var_3c = arg8
    eax_2 = arg2
else
    eax_2 = arg2
    esi = eax_2
    edi = arg3
    var_3c = arg4
    var_38 = arg5

int32_t ecx_7 = arg10
int32_t var_30
int32_t var_2c
int32_t var_28
int32_t edx_1

if (ecx_7 != 0)
    var_28 = arg13
    var_30 = arg12
    edx_1 = arg11
else
    int32_t var_40
    sub_4bf400(eax_2, &var_2c, eax_2, &var_28, &var_40, &var_30)
    eax_2 = arg2
    edx_1 = var_2c
    arg10 = eax_2
    var_30 = var_28
    var_28 = var_40
    ecx_7 = eax_2

bool cond:1 = data_1bfe268 == 0xffffffff
data_208c6a8 = eax_2
data_208c6ac = arg3
data_208c6b0 = arg4
data_208c6b4 = arg5
data_208c6c0.d = var_3c
data_208c6c4.d = var_38
int32_t eax_10 = var_30
data_208c6bc.d = edi
int32_t edi_1 = var_28
data_208c6d0.d = eax_10
var_2c = edx_1
data_208c6b8.d = esi
data_208c6c8.d = ecx_7
data_208c6cc.d = edx_1
data_208c6d4.d = edi_1
data_1bfe25c = arg14

if (not(cond:1))
    bool cond:0_1 = data_1bfe260 == 0
    data_1bfe264 = 1
    data_208c6dc = 0xffffffff
    data_208c6e0 = 0xffffffff
    data_208c6e4 = 0xffffffff
    data_208c6e8 = 0xffffffff
    
    if (not(cond:0_1))
        int32_t eax_12 = arg16
        data_208c704 = 0
        
        if (eax_12 s>= 0)
            if (eax_12 s> 0xff)
                eax_12 = 0xff
            
            data_208c724 = eax_12
        
        if (data_208c70c != 0 && data_63e788 != 0)
            if (data_208c6ec == 0)
                sub_4c0100(1)
            else
                sub_4c0310(1)
        
        uint32_t mciId = data_1bfe268
        int32_t var_1c_1 = 0
        int64_t dwParam2 = 0
        dwParam2:4.d = 0xa
        mciSendCommandA(mciId, 0x80d, 0x402, &dwParam2)
        int64_t dwParam2_1 = 0
        int32_t var_10_1 = 0
        dwParam2_1:4.d =
            ((zx.d(arg5.w) << 8 | zx.d(arg4.b)) << 8 | zx.d(arg3.w)) << 8 | zx.d(arg2.b)
        dwParam2_1.d = data_7027bc
        uint32_t var_10_2 =
            ((zx.d(edi_1.w) << 8 | zx.d(var_30.b)) << 8 | zx.d(var_2c.w)) << 8 | zx.d(arg10.b)
        uint32_t eax_26 = mciSendCommandA(data_1bfe268, 0x806, 0xd, &dwParam2_1)
        int32_t edx_5 = data_208c724
        
        if (edx_5 != 0xff)
            sub_4c0650(eax_26, edx_5, 5, 0xff, arg15)

BOOL result = ReleaseSemaphore(data_641b34, 1, nullptr)
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
