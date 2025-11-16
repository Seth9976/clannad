// 函数: sub_426450
// 地址: 0x426450
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg19 == 0 || arg3 u> 0x1ff)
    return 

sub_425430(arg3, 1)

if (*(arg3 * 0x74 + 0x13747b0) == 0)
    return 

int32_t ecx = arg13

if (arg11 s> ecx)
    arg1 = arg11
    arg11 = ecx
    ecx = arg1
    arg13 = ecx

int32_t edi_1 = arg14

if (arg12 s> edi_1)
    arg14 = arg12
    arg12 = edi_1

int32_t edx_1 = arg15
int32_t ebx_1 = arg17

if (edx_1 s> ebx_1)
    arg1 = edx_1
    edx_1 = ebx_1
    ebx_1 = arg1

int32_t esi_2 = arg16
int32_t edi_2 = arg18

if (esi_2 s> edi_2)
    arg1 = esi_2
    esi_2 = edi_2
    edi_2 = arg1

if (edx_1 != 0xffffffff || esi_2 != edx_1 || ebx_1 != edx_1 || edi_2 != edx_1)
    if (edx_1 s< arg11)
        edx_1 = arg11
    
    if (ebx_1 s> ecx)
        ebx_1 = ecx
    
    if (esi_2 s< arg12)
        esi_2 = arg12
    
    if (edi_2 s> arg14)
        edi_2 = arg14
else
    edx_1 = arg11
    ebx_1 = ecx
    esi_2 = arg12
    edi_2 = arg14

if (edx_1 s> ebx_1 || esi_2 s> edi_2 || arg9 s<= 0 || arg10 s<= 0)
    return 

int32_t i_1 = arg7

if (i_1 s< 0)
    int32_t ecx_1 = neg.d(i_1)
    
    if (ecx_1 s>= arg9)
        ecx_1 = mods.dp.d(sx.q(ecx_1), arg9)
    
    i_1 = neg.d(ecx_1)
    
    if (i_1 != 0)
        int32_t i
        
        do
            if (i_1 s> 0)
                i_1 -= arg9
                break
            
            i = i_1
            i_1 += arg9
        while (i != neg.d(arg9))
else
    if (i_1 s>= arg9)
        i_1 = mods.dp.d(sx.q(i_1), arg9)
    
    for (; i_1 s> 0; i_1 -= arg9)

int32_t i_3 = arg8

if (i_3 s< 0)
    int32_t edx_7 = neg.d(i_3)
    
    if (edx_7 s>= arg10)
        edx_7 = mods.dp.d(sx.q(edx_7), arg10)
    
    i_3 = neg.d(edx_7)
    
    if (i_3 != 0)
        int32_t i_2
        
        do
            if (i_3 s> 0)
                i_3 -= arg10
                break
            
            i_2 = i_3
            i_3 += arg10
        while (i_2 != neg.d(arg10))
else
    if (i_3 s>= arg10)
        i_3 = mods.dp.d(sx.q(i_3), arg10)
    
    for (; i_3 s> 0; i_3 -= arg10)

void* edi_5 = arg12 + i_3

if (edi_5 s> arg14)
    return 

int32_t edx_9 = arg13
int32_t ecx_2 = arg10
arg1 = arg10 - 1 + edi_5
int32_t var_8_1 = arg1

do
    void* esi_4 = arg11 + i_1
    
    if (esi_4 s<= edx_9)
        do
            void* eax_12 = arg9 - 1 + esi_4
            sub_426050(eax_12, arg2, arg3, arg4, arg5, arg6, esi_4, edi_5, eax_12, arg1, edx_1.b, 
                esi_2, ebx_1, edi_2, arg19.d)
            arg1 = var_8_1
            esi_4 += arg9
        while (esi_4 s<= arg13)
        
        ecx_2 = arg10
        edx_9 = arg13
    
    edi_5 += ecx_2
    arg1 += ecx_2
    var_8_1 = arg1
while (edi_5 s<= arg14)
