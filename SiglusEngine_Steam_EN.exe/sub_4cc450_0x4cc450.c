// 函数: sub_4cc450
// 地址: 0x4cc450
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t var_314 = arg2

if (arg8 != 0)
    *arg8 = 0

WaitForSingleObject(data_1c04208, 0xffffffff)
int32_t edi = arg5
int32_t* eax_8 = _fopen(arg3, "rb")
BOOL var_310
void var_30c
int32_t* var_330
int32_t* var_3c

if (edi s> 0)
    if (eax_8 == 0)
    label_4cc6ae:
        ReleaseSemaphore(data_1c04208, 1, nullptr)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return 0
    
    if (sub_4cc2b0(&var_3c, arg4, var_314, &var_3c, &var_30c, &var_330, &var_310, nullptr, eax_8)
            == 0)
        goto label_4cc6ae
else
    if (eax_8 == 0)
        goto label_4cc6ae
    
    int32_t var_324
    
    if (sub_4cc2b0(&var_3c, arg4, var_314, &var_3c, &var_30c, &var_330, &var_310, &var_324, eax_8)
            == 0)
        goto label_4cc6ae
    
    edi = var_324
BOOL esi_1 = var_310

if (arg8 != 0)
    *arg8 = *(esi_1 + 4) * edi * 2

if (arg9 != 0)
    *arg9 = *(esi_1 + 4)

int32_t* eax_17 = arg10

if (eax_17 != 0)
    *eax_17 = 0x10

if (arg11 != 0)
    eax_17 = *(esi_1 + 8)
    *arg11 = eax_17

if (arg12 != 0)
    eax_17 = *(esi_1 + 4) * edi
    *arg12 = eax_17

int32_t esi_3 = *(esi_1 + 4) * edi
var_310 = 0
var_314 = 0
uint32_t esi_4 = esi_3 * 2
sub_4d6960(eax_17, &var_310, &var_314, esi_4, "OggVorbis")
BOOL ebx_1 = var_310
int32_t edi_1 = ebx_1
void var_31c
int32_t i = sub_402cf0(&var_30c, ebx_1, esi_4, 0, 2, 1, &var_31c)
bool cond:0 = i s<= 0

while (i != 0)
    if (cond:0)
        int32_t eax_19 = sub_4cc1f0(i)
        
        if (eax_19 != 0)
            if (esi_4 s> 0)
                sub_4d1ba0(eax_19, esi_4, edi_1, 0)
            
            break
    else
        esi_4 -= i
        edi_1 += i
        
        if (esi_4 s<= 0)
            break
    
    i = sub_402cf0(&var_30c, edi_1, esi_4, 0, 2, 1, &var_31c)
    cond:0 = i s<= 0

*arg6 = var_314
*arg7 = ebx_1
sub_401000(&var_30c)
ReleaseSemaphore(data_1c04208, 1, nullptr)
sub_5f02dd(eax_1 ^ &__saved_ebp)
return 1
