// 函数: sub_6e9490
// 地址: 0x6e9490
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = arg1[3]
int32_t eax = arg1[2]

if (edx s< 8)
    eax = sub_6ec810(arg1, 8)
    edx = arg1[3]

arg1[2] = eax << 8
arg1[3] = edx - 8
*arg2 = (eax u>> 0x18).b
int32_t edx_1 = arg1[3]
int32_t eax_2 = arg1[2]

if (edx_1 s< 8)
    eax_2 = sub_6ec810(arg1, 8)
    edx_1 = arg1[3]

arg1[2] = eax_2 << 8
arg1[3] = edx_1 - 8
arg2[1] = (eax_2 u>> 0x18).b
int32_t edx_2 = arg1[3]
int32_t eax_4 = arg1[2]

if (edx_2 s< 8)
    eax_4 = sub_6ec810(arg1, 8)
    edx_2 = arg1[3]

arg1[2] = eax_4 << 8
arg1[3] = edx_2 - 8
arg2[2] = (eax_4 u>> 0x18).b
uint8_t eax_5 = *arg2

if (eax_5 u> 3 || (eax_5 == 3 && arg2[1] u> 2))
    return 0xffffffea

int32_t edx_3 = arg1[3]
int32_t eax_6 = arg1[2]

if (edx_3 s< 0x10)
    eax_6 = sub_6ec810(arg1, 0x10)
    edx_3 = arg1[3]

arg1[2] = eax_6 << 0x10
arg1[3] = edx_3 - 0x10
*(arg2 + 4) = eax_6 u>> 0xc & 0xffff0
int32_t edx_4 = arg1[3]
int32_t eax_9 = arg1[2]

if (edx_4 s< 0x10)
    eax_9 = sub_6ec810(arg1, 0x10)
    edx_4 = arg1[3]

arg1[2] = eax_9 << 0x10
arg1[3] = edx_4 - 0x10
*(arg2 + 8) = eax_9 u>> 0xc & 0xffff0
int32_t edx_5 = arg1[3]
int32_t eax_12 = arg1[2]

if (edx_5 s< 0x18)
    eax_12 = sub_6ec810(arg1, 0x18)
    edx_5 = arg1[3]

arg1[2] = eax_12 << 0x18
arg1[3] = edx_5 - 0x18
*(arg2 + 0xc) = eax_12 u>> 8
int32_t edx_6 = arg1[3]
int32_t eax_14 = arg1[2]

if (edx_6 s< 0x18)
    eax_14 = sub_6ec810(arg1, 0x18)
    edx_6 = arg1[3]

arg1[2] = eax_14 << 0x18
arg1[3] = edx_6 - 0x18
*(arg2 + 0x10) = eax_14 u>> 8
int32_t edx_7 = arg1[3]
int32_t eax_16 = arg1[2]

if (edx_7 s< 8)
    eax_16 = sub_6ec810(arg1, 8)
    edx_7 = arg1[3]

arg1[2] = eax_16 << 8
arg1[3] = edx_7 - 8
*(arg2 + 0x14) = eax_16 u>> 0x18
int32_t edx_8 = arg1[3]
int32_t eax_18 = arg1[2]

if (edx_8 s< 8)
    eax_18 = sub_6ec810(arg1, 8)
    edx_8 = arg1[3]

arg1[2] = eax_18 << 8
arg1[3] = edx_8 - 8
*(arg2 + 0x18) = eax_18 u>> 0x18
int32_t ecx_35 = arg1[3]
int32_t eax_20 = arg1[2]

if (ecx_35 s< 0x20)
    eax_20 = sub_6ec810(arg1, 0x20)
    ecx_35 = arg1[3]

arg1[2] = 0
arg1[3] = ecx_35 - 0x20
*(arg2 + 0x1c) = eax_20
int32_t ecx_38 = arg1[3]
int32_t edx_9 = arg1[2]

if (ecx_38 s< 0x20)
    int32_t eax_21 = sub_6ec810(arg1, 0x20)
    ecx_38 = arg1[3]
    edx_9 = eax_21

arg1[2] = 0
arg1[3] = ecx_38 - 0x20
int32_t ebx = *(arg2 + 4)
*(arg2 + 0x20) = edx_9

if (ebx != 0)
    int32_t ecx_41 = *(arg2 + 8)
    
    if (ecx_41 != 0 && *(arg2 + 0x14) + *(arg2 + 0xc) u<= ebx)
        int32_t ebx_1 = *(arg2 + 0x18)
        
        if (*(arg2 + 0x10) + ebx_1 u<= ecx_41 && *(arg2 + 0x1c) != 0 && edx_9 != 0)
            *(arg2 + 0x18) = ecx_41 - *(arg2 + 0x10) - ebx_1
            *(arg2 + 0x24) = sub_6ec8a0(arg1, 0x18)
            *(arg2 + 0x28) = sub_6ec8a0(arg1, 0x18)
            *(arg2 + 0x2c) = sub_6ec8a0(arg1, 8)
            *(arg2 + 0x34) = sub_6ec8a0(arg1, 0x18)
            *(arg2 + 0x38) = sub_6ec8a0(arg1, 6)
            *(arg2 + 0x3c) = sub_6ec8a0(arg1, 5)
            uint32_t eax_32 = sub_6ec8a0(arg1, 2)
            *(arg2 + 0x30) = eax_32
            
            if (eax_32 != 1 && sub_6ec8a0(arg1, 3) == 0 && sub_6ec8f0(arg1) s>= 0)
                return 0

return 0xffffffec
