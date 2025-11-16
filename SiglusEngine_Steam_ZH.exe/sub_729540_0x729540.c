// 函数: sub_729540
// 地址: 0x729540
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edi = arg1[0x66]
sub_729280(arg1)
sub_7294b0(arg1)
*(edi + 0xc) = 0
*(edi + 0x10) = sub_7291e0(arg1)
*(edi + 0x14) = 0
*(edi + 0x18) = 0
char eax = *(arg1 + 0x4a)

if (eax == 0 || arg1[0x10].b == 0)
    arg1[0x16].w = 0
    *(arg1 + 0x5a) = 0

if (eax != 0)
    if (*(arg1 + 0x41) != 0)
        *(*arg1 + 0x14) = 0x30
        (**arg1)(arg1)
    
    if (arg1[0x19] != 3)
        arg1[0x16].w = 1
        *(arg1 + 0x5a) = 0
        arg1[0x1d] = 0
    else if (arg1[0x1d] != 0)
        *(arg1 + 0x59) = 1
    else if (arg1[0x14].b == 0)
        arg1[0x16].b = 1
    else
        *(arg1 + 0x5a) = 1
    
    if (arg1[0x16].b != 0)
        sub_72ffe0(arg1)
        *(edi + 0x14) = arg1[0x70]
    
    if (*(arg1 + 0x5a) != 0 || *(arg1 + 0x59) != 0)
        sub_734be0(arg1)
        *(edi + 0x18) = arg1[0x70]

if (*(arg1 + 0x41) == 0)
    if (*(edi + 0x10) == 0)
        sub_7324b0(arg1)
        sub_730a70(arg1)
    else
        sub_735270(arg1)
    
    sub_735c50(arg1, *(arg1 + 0x5a))

sub_7306c0(arg1)

if (*(arg1 + 0xca) == 0)
    sub_72f470(arg1)
else
    sub_731b70(arg1)

char edx_2

if (*(arg1[0x6a] + 0x10) != 0 || arg1[0x10].b != 0)
    edx_2 = 1
else
    edx_2 = 0

sub_7336a0(arg1, edx_2)

if (*(arg1 + 0x41) == 0)
    sub_7358b0(arg1)

(*(arg1[1] + 0x18))(arg1)
void* result = (*(arg1[0x6a] + 8))(arg1)
void* ecx_11 = arg1[2]

if (ecx_11 != 0 && arg1[0x10].b == 0)
    result = arg1[0x6a]
    
    if (*(result + 0x10) != 0)
        int32_t eax_11 = arg1[9]
        
        if (*(arg1 + 0xc9) != 0)
            eax_11 = eax_11 * 3 + 2
        
        *(ecx_11 + 4) = 0
        *(arg1[2] + 8) = arg1[0x4a] * eax_11
        *(arg1[2] + 0xc) = 0
        result = arg1[2]
        int32_t ecx_14
        ecx_14.b = *(arg1 + 0x5a) != 0
        *(result + 0x10) = ecx_14 + 2
        *(edi + 0xc) += 1

return result
