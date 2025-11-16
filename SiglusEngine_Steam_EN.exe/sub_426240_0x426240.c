// 函数: sub_426240
// 地址: 0x426240
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg17 == 0 || arg3 u> 0x1ff)
    return 

sub_425430(arg3, 1)

if (*(arg3 * 0x74 + 0x13747b0) == 0)
    return 

int32_t edx = arg11

if (arg9 s> edx)
    int32_t eax = arg9
    arg9 = edx
    edx = eax
    arg11 = edx

if (arg10 s> arg12)
    void* eax_1 = arg10
    arg10 = arg12
    arg12 = eax_1

int32_t esi_1 = arg13
int32_t ebx_3 = arg15

if (esi_1 s> ebx_3)
    int32_t eax_2 = esi_1
    esi_1 = ebx_3
    ebx_3 = eax_2

void* edi_2 = arg14
void* eax_3 = arg16

if (edi_2 s> eax_3)
    eax_3 = edi_2
    edi_2 = arg16

if (esi_1 != 0xffffffff || edi_2 != esi_1 || ebx_3 != esi_1 || eax_3 != esi_1)
    if (esi_1 s< arg9)
        esi_1 = arg9
    
    if (ebx_3 s> edx)
        ebx_3 = edx
    
    arg15 = ebx_3
    
    if (edi_2 s< arg10)
        edi_2 = arg10
    
    arg14 = edi_2
    
    if (eax_3 s> arg12)
        eax_3 = arg12
else
    esi_1 = arg9
    arg14 = arg10
    eax_3 = arg12
    arg15 = edx

arg1 = *(arg3 * 0x74 + 0x13747c4)
void* ebx_4
int32_t edi_3

if (arg1 != 0 && arg1 != 1 && arg1 == 2)
    arg1 = sub_4d25b0(*(arg3 * 0x74 + 0x13747b4), arg2)
    
    if (arg1 != 0)
        edi_3 = *(arg1 + 0x1c)
        ebx_4 = *(arg1 + 0x20)
        goto label_426347
    
    return 

ebx_4 = *(arg3 * 0x74 + 0x13747c0)
edi_3 = *(arg3 * 0x74 + 0x13747bc)
label_426347:

if (esi_1 s> arg15 || arg14 s> eax_3 || edi_3 s<= 0 || ebx_4 s<= 0)
    return 

int32_t i_1 = arg7

if (i_1 s< 0)
    int32_t ecx_3 = neg.d(i_1)
    
    if (ecx_3 s>= edi_3)
        ecx_3 = mods.dp.d(sx.q(ecx_3), edi_3)
    
    i_1 = neg.d(ecx_3)
    
    if (i_1 != 0)
        int32_t i
        
        do
            if (i_1 s> 0)
                i_1 -= edi_3
                break
            
            i = i_1
            i_1 += edi_3
        while (i != neg.d(edi_3))
else
    if (i_1 s>= edi_3)
        i_1 = mods.dp.d(sx.q(i_1), edi_3)
    
    for (; i_1 s> 0; i_1 -= edi_3)

int32_t i_3 = arg8

if (i_3 s< 0)
    int32_t edx_7 = neg.d(i_3)
    
    if (edx_7 s>= ebx_4)
        edx_7 = mods.dp.d(sx.q(edx_7), ebx_4)
    
    i_3 = neg.d(edx_7)
    
    if (i_3 != 0)
        int32_t i_2
        
        do
            if (i_3 s> 0)
                i_3 -= ebx_4
                break
            
            i_2 = i_3
            i_3 += ebx_4
        while (i_2 != neg.d(ebx_4))
else
    if (i_3 s>= ebx_4)
        i_3 = mods.dp.d(sx.q(i_3), ebx_4)
    
    for (; i_3 s> 0; i_3 -= ebx_4)

void* ebx_6 = arg10 + i_3

if (ebx_6 s> arg12)
    return 

arg1 = ebx_4
int32_t edx_10 = arg9 + i_1
int32_t ecx_4 = arg11
int32_t var_14_1 = edx_10

do
    int32_t esi_2 = edx_10
    
    if (esi_2 s<= ecx_4)
        do
            arg1 = sub_425ed0(arg1, arg2, arg3, arg4, arg5, arg6, esi_2, ebx_6, esi_1, arg14, 
                arg15, eax_3, arg17.d, arg18)
            esi_2 += edi_3
        while (esi_2 s<= arg11)
        
        arg1 = ebx_4
        ecx_4 = arg11
        edx_10 = var_14_1
    
    ebx_6 += arg1
while (ebx_6 s<= arg12)
