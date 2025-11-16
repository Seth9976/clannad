// 函数: sub_4299f0
// 地址: 0x4299f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 == 0)
    return 

void* edx = arg4

if (arg2 s<= 0 && edx s<= 0)
    return 

int32_t i_2 = arg7

if (i_2 s<= 0)
    i_2 = 1

void* ecx = arg11
int32_t eax = arg10

if (eax s<= 0)
    eax = arg2

arg10 = eax

if (ecx s<= 0)
    ecx = edx

arg11 = ecx

if (arg6 != 0 && (arg2 s> 0 || edx s> 0))
    uint32_t eax_3 = zx.d(*arg3)
    sub_429990(eax_3, arg2, arg3, edx, eax_3.b, arg3[1], arg3[2])
    eax = arg10
    ecx = arg11
    edx = arg4

HGLOBAL esi_1 = arg8
void* edi_1 = arg9
BOOL var_c = 0
int32_t var_8 = 0
int32_t var_14 = 0
BOOL var_18 = 0

if (i_2 s> 0)
    void* ecx_2 = ecx - 1
    void* var_24_1 = ecx_2
    int32_t i_1 = i_2
    int32_t i
    
    do
        int32_t* var_34_2 = &var_8
        void* eax_8 = eax - 1 + esi_1
        void* eax_9 = sub_581fe0(eax_8, arg2, arg3, edx, 1, esi_1, edi_1, eax_8, ecx_2 + edi_1, 
            arg12, arg13, &var_c)
        sub_4d24d0(eax_9, &var_18, &var_14, i_2, var_8, eax_9, arg15)
        sub_4d6c40(&var_c, &var_8)
        
        if (arg14 == 0)
            edi_1 += arg11
        else
            esi_1 += arg10
        
        i = i_1
        i_1 -= 1
        edx = arg4
        ecx_2 = var_24_1
    while (i != 1)

sub_4d6c40(arg5, &arg5[1])
*arg5 = var_14
arg5[1] = var_18
arg5[5] = 2
