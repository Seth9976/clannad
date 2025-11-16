// 函数: sub_426ad0
// 地址: 0x426ad0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (*arg3 == 0)
    arg1.b = 0
    return arg1

int32_t* eax = arg3[5]
int32_t var_14 = 0
int32_t var_8 = 0
BOOL var_10
void* const var_c
void* ecx_2
void* const edx_2
void* ebx

if (eax == 0 || eax == 1)
    ecx_2 = arg3[1]
    edx_2 = arg3[3]
    ebx = arg3[4]
else
    void* var_1c
    
    if (eax != 2)
        if (eax == 3)
            eax.b = 0
            return eax
        
        ecx_2 = var_1c
        edx_2 = var_c
        ebx = var_10
    else
        if (sub_426a70(&var_1c, arg2, arg3, &var_1c, &var_c, &var_10).b == 0)
            eax.b = 0
            return eax
        
        ebx = var_10
        int32_t eax_4 = (ebx * var_c) << 2
        int32_t var_2c_2 = arg2
        int32_t* var_30_3 = arg3
        int32_t* var_38
        sub_4243d0(sub_4d6960(eax_4, &var_8, &var_14, eax_4, "EMOJI_GET_DATA"), var_c, var_8, ebx, 
            var_38)
        edx_2 = var_c
        ecx_2 = var_8

void* const edi = arg4
void* esi_1 = arg5
char const* const var_2c_3 = "EMOJI_GET_DATA"

if (edi s<= 0)
    edi = edx_2

var_10 = 0
var_c = nullptr

if (esi_1 s<= 0)
    esi_1 = ebx

sub_4cabd0(&var_10, edx_2, ecx_2, ebx, edi, esi_1, &var_10, &var_c, 0, nullptr)
*arg6 = var_10
*arg7 = var_c
*arg8 = edi
*arg9 = esi_1
sub_4d6c40(&var_14, &var_8)
int32_t eax_11
eax_11.b = 1
return eax_11
