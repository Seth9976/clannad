// 函数: sub_4b8010
// 地址: 0x4b8010
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

*arg1 = *arg2
int32_t eax = arg2[1]

if (eax s>= 0)
    if (eax s> 0x80)
        eax = 0x80
    
    arg1[1] = eax
else
    arg1[1] = 0

int32_t eax_1 = arg2[2]
int32_t ecx = arg2[1]

if (eax_1 s< 0 || eax_1 s>= ecx)
    eax_1 = ecx

arg1[2] = eax_1
arg1[3] = arg2[3]
int32_t eax_3 = arg2[4]
arg1[4] = eax_3

if (eax_3 s< 0 || eax_3 s> 3)
    arg1[4] = 0

int32_t eax_4 = arg1[4]
int32_t eax_5

if (eax_4 == 1 || eax_4 == 2)
    eax_5 = arg2[6]

int32_t eax_6

if ((eax_4 != 1 && eax_4 != 2) || arg2[5] s<= eax_5)
    arg1[5] = arg2[5]
    eax_6 = arg2[6]
else
    arg1[5] = eax_5
    eax_6 = arg2[5]

bool cond:0 = arg1[5] s>= 0
arg1[6] = eax_6

if (not(cond:0))
    arg1[5] = 0

if (arg1[6] s< 0)
    arg1[6] = 0

int32_t eax_8 = arg1[6]
int32_t ecx_1 = arg1[5]

if (ecx_1 s>= eax_8)
    arg1[0x2c] = ecx_1 - eax_8 + 1
else
    arg1[0x2c] = eax_8 - ecx_1 + 1

int32_t eax_11 = arg2[7]

if (eax_11 s>= 0xa)
    arg1[7] = eax_11
else
    arg1[7] = 0xa

int32_t eax_13

if (arg2[0xe] s>= 0)
    arg1[0x17] = 0
    eax_13 = arg2[0xe]
else
    arg1[0x17] = 1
    eax_13 = neg.d(arg2[0xe])

if (eax_13 s>= 0x64)
    arg1[0x16] = eax_13
else
    arg1[0x16] = 0x64

int32_t eax_14 = arg2[0xf]

if (eax_14 s>= 0)
    arg1[0x18] = eax_14
else
    arg1[0x18] = 0

int32_t eax_15 = arg2[0x10]

if (eax_15 s>= 0)
    arg1[0x19] = eax_15
else
    arg1[0x19] = 0

int32_t eax_16 = arg2[0x14]

if (eax_16 s>= 0)
    if (eax_16 s> 0xff)
        eax_16 = 0xff
    
    arg1[0x1a] = eax_16
else
    arg1[0x1a] = 0

int32_t eax_17 = arg2[0x15]

if (eax_17 s>= 0)
    if (eax_17 s> 0xff)
        eax_17 = 0xff
    
    arg1[0x1b] = eax_17
else
    arg1[0x1b] = 0

int32_t eax_18 = arg2[0x16]

if (eax_18 s< 0)
    eax_18 = 0

arg1[0x1c] = eax_18
int32_t eax_19 = arg2[0x17]

if (eax_19 s>= 0)
    arg1[0x1d] = eax_19
else
    arg1[0x1d] = 0

arg1[0x1e] = arg2[0x18]
int32_t eax_21 = arg2[0x11]

if (eax_21 s>= 0)
    if (eax_21 s> 4)
        eax_21 = 4
    
    arg1[0x1f] = eax_21
else
    arg1[0x1f] = 0

int32_t eax_22 = arg2[0x12]

if (eax_22 s>= 0)
    if (eax_22 s>= 6)
        eax_22 = 5
    
    arg1[0x20] = eax_22
else
    arg1[0x20] = 0

int32_t eax_23 = arg2[0x13]
arg1[0x22] = 0

if (eax_23 s< 0x64)
    eax_23 = 0x64

arg1[0x21] = eax_23
arg1[0x25] = arg2[0x19]
arg1[0x26] = arg2[0x1a]
arg1[0x27] = arg2[0x1b]
arg1[0x28] = arg2[0x1c]
int32_t eax_28 = arg2[0x1d]
arg1[0x29] = eax_28

if (eax_28 s< 0)
    arg1[0x29] = 0
else if (eax_28 s> 0x64)
    arg1[0x29] = 0x64

arg1[8] = arg2[8]
bool cond:3 = arg1[8] == 0
arg1[9] = arg2[9]
int32_t eax_32

if (cond:3)
    int32_t eax_33 = arg2[0xc]
    int32_t ecx_4 = arg2[0xa]
    
    if (ecx_4 s<= eax_33)
        arg1[0xa] = ecx_4
        eax_32 = arg2[0xc]
    else
        arg1[0xa] = eax_33
        eax_32 = arg2[0xa]
else
    int32_t eax_31 = data_70300c
    arg1[0xa] = 0
    eax_32 = eax_31 - 1

bool cond:4 = arg1[9] == 0
arg1[0xc] = eax_32
int32_t eax_35

if (cond:4)
    int32_t eax_36 = arg2[0xd]
    int32_t ecx_5 = arg2[0xb]
    
    if (ecx_5 s<= eax_36)
        arg1[0xb] = ecx_5
        eax_35 = arg2[0xd]
    else
        arg1[0xb] = eax_36
        eax_35 = arg2[0xb]
else
    int32_t eax_34 = data_7030dc
    arg1[0xb] = 0
    eax_35 = eax_34 - 1

int32_t ecx_7 = arg1[0xc] - arg1[0xa]
arg1[0xd] = eax_35
int32_t eax_37 = eax_35 - arg1[0xb]
arg1[0x11] = eax_37
arg1[0x2b] = eax_37 + 1
arg1[0x2e] = (eax_37 + 1) s>> 3
arg1[0x40] = arg1[7] s>> 3
arg1[0x4a] = arg1[0x16] s>> 3
int32_t eax_44 = arg1[0x18]
arg1[0x10] = ecx_7
arg1[0x2a] = ecx_7 + 1
arg1[0x54] = eax_44 s>> 3
int32_t eax_46 = arg1[0x1d]
arg1[0x2d] = (ecx_7 + 1) s>> 3
arg1[0xe] = 0
arg1[0xf] = 0
arg1[0x5e] = eax_46 s>> 3
int32_t esi_1 = sub_4d18c0(2) & 7
int32_t eax_51 = *((((esi_1 + 1) & 7) << 2) + &data_610a10)
arg1[*(((esi_1 & 7) << 2) + &data_610a10) + 0x2f] = 0
int32_t edx = arg1[0x2d]
arg1[eax_51 + 0x2f] = edx
int32_t edx_1 = edx + arg1[0x2d]
arg1[*((((esi_1 + 2) & 7) << 2) + &data_610a10) + 0x2f] = edx_1
int32_t edx_2 = edx_1 + arg1[0x2d]
arg1[*((((esi_1 + 3) & 7) << 2) + &data_610a10) + 0x2f] = edx_2
int32_t edx_3 = edx_2 + arg1[0x2d]
arg1[*((((esi_1 - 4) & 7) << 2) + &data_610a10) + 0x2f] = edx_3
int32_t edx_4 = edx_3 + arg1[0x2d]
arg1[*((((esi_1 - 3) & 7) << 2) + &data_610a10) + 0x2f] = edx_4
int32_t edx_5 = edx_4 + arg1[0x2d]
arg1[*((((esi_1 - 2) & 7) << 2) + &data_610a10) + 0x2f] = edx_5
arg1[*((((esi_1 - 1) & 7) << 2) + &data_610a10) + 0x2f] = arg1[0x2d] + edx_5
int32_t esi_3 = sub_4d18c0(2) & 7
arg1[*(((esi_3 & 7) << 2) + &data_610a10) + 0x37] = 0
int32_t edx_6 = arg1[0x2e]
arg1[*((((esi_3 + 1) & 7) << 2) + &data_610a10) + 0x37] = edx_6
int32_t edx_7 = edx_6 + arg1[0x2e]
arg1[*((((esi_3 + 2) & 7) << 2) + &data_610a10) + 0x37] = edx_7
int32_t edx_8 = edx_7 + arg1[0x2e]
arg1[*((((esi_3 + 3) & 7) << 2) + &data_610a10) + 0x37] = edx_8
int32_t edx_9 = edx_8 + arg1[0x2e]
arg1[*((((esi_3 - 4) & 7) << 2) + &data_610a10) + 0x37] = edx_9
int32_t edx_10 = edx_9 + arg1[0x2e]
arg1[*((((esi_3 - 3) & 7) << 2) + &data_610a10) + 0x37] = edx_10
int32_t edx_11 = edx_10 + arg1[0x2e]
arg1[*((((esi_3 - 2) & 7) << 2) + &data_610a10) + 0x37] = edx_11
arg1[*((((esi_3 - 1) & 7) << 2) + &data_610a10) + 0x37] = arg1[0x2e] + edx_11
int32_t esi_5 = sub_4d18c0(2) & 7
int32_t eax_95 = *((((esi_5 + 1) & 7) << 2) + &data_610a10)
arg1[*(((esi_5 & 7) << 2) + &data_610a10) + 0x41] = 0
int32_t edx_12 = arg1[0x40]
arg1[eax_95 + 0x41] = edx_12
int32_t edx_13 = edx_12 + arg1[0x40]
arg1[*((((esi_5 + 2) & 7) << 2) + &data_610a10) + 0x41] = edx_13
int32_t edx_14 = edx_13 + arg1[0x40]
arg1[*((((esi_5 + 3) & 7) << 2) + &data_610a10) + 0x41] = edx_14
int32_t edx_15 = edx_14 + arg1[0x40]
arg1[*((((esi_5 - 4) & 7) << 2) + &data_610a10) + 0x41] = edx_15
int32_t edx_16 = edx_15 + arg1[0x40]
arg1[*((((esi_5 - 3) & 7) << 2) + &data_610a10) + 0x41] = edx_16
int32_t edx_17 = edx_16 + arg1[0x40]
arg1[*((((esi_5 - 2) & 7) << 2) + &data_610a10) + 0x41] = edx_17
arg1[*((((esi_5 - 1) & 7) << 2) + &data_610a10) + 0x41] = arg1[0x40] + edx_17
int32_t esi_7 = sub_4d18c0(2) & 7
int32_t eax_117 = *((((esi_7 + 1) & 7) << 2) + &data_610a10)
arg1[*(((esi_7 & 7) << 2) + &data_610a10) + 0x4b] = 0
int32_t edx_18 = arg1[0x4a]
arg1[eax_117 + 0x4b] = edx_18
int32_t edx_19 = edx_18 + arg1[0x4a]
arg1[*((((esi_7 + 2) & 7) << 2) + &data_610a10) + 0x4b] = edx_19
int32_t edx_20 = edx_19 + arg1[0x4a]
arg1[*((((esi_7 + 3) & 7) << 2) + &data_610a10) + 0x4b] = edx_20
int32_t edx_21 = edx_20 + arg1[0x4a]
arg1[*((((esi_7 - 4) & 7) << 2) + &data_610a10) + 0x4b] = edx_21
int32_t edx_22 = edx_21 + arg1[0x4a]
arg1[*((((esi_7 - 3) & 7) << 2) + &data_610a10) + 0x4b] = edx_22
int32_t edx_23 = edx_22 + arg1[0x4a]
arg1[*((((esi_7 - 2) & 7) << 2) + &data_610a10) + 0x4b] = edx_23
arg1[*((((esi_7 - 1) & 7) << 2) + &data_610a10) + 0x4b] = arg1[0x4a] + edx_23
int32_t edi_1 = sub_4d18c0(2) & 7
int32_t eax_139 = *((((edi_1 + 1) & 7) << 2) + &data_610a10)
arg1[*(((edi_1 & 7) << 2) + &data_610a10) + 0x55] = 0
int32_t esi_8 = arg1[0x54]
arg1[eax_139 + 0x55] = esi_8
int32_t esi_9 = esi_8 + arg1[0x54]
arg1[*((((edi_1 + 2) & 7) << 2) + &data_610a10) + 0x55] = esi_9
int32_t esi_10 = esi_9 + arg1[0x54]
arg1[*((((edi_1 + 3) & 7) << 2) + &data_610a10) + 0x55] = esi_10
int32_t esi_11 = esi_10 + arg1[0x54]
arg1[*((((edi_1 - 4) & 7) << 2) + &data_610a10) + 0x55] = esi_11
int32_t esi_12 = esi_11 + arg1[0x54]
arg1[*((((edi_1 - 3) & 7) << 2) + &data_610a10) + 0x55] = esi_12
int32_t esi_13 = esi_12 + arg1[0x54]
arg1[*((((edi_1 - 2) & 7) << 2) + &data_610a10) + 0x55] = esi_13
arg1[*((((edi_1 - 1) & 7) << 2) + &data_610a10) + 0x55] = arg1[0x54] + esi_13
int32_t esi_15 = sub_4d18c0(2) & 7
int32_t eax_161 = *((((esi_15 + 1) & 7) << 2) + &data_610a10)
arg1[*(((esi_15 & 7) << 2) + &data_610a10) + 0x5f] = 0
int32_t edx_26 = arg1[0x5e]
arg1[eax_161 + 0x5f] = edx_26
int32_t edx_27 = edx_26 + arg1[0x5e]
arg1[*((((esi_15 + 2) & 7) << 2) + &data_610a10) + 0x5f] = edx_27
int32_t edx_28 = edx_27 + arg1[0x5e]
arg1[*((((esi_15 + 3) & 7) << 2) + &data_610a10) + 0x5f] = edx_28
int32_t edx_29 = edx_28 + arg1[0x5e]
arg1[*((((esi_15 - 4) & 7) << 2) + &data_610a10) + 0x5f] = edx_29
int32_t edx_30 = edx_29 + arg1[0x5e]
arg1[*((((esi_15 - 3) & 7) << 2) + &data_610a10) + 0x5f] = edx_30
int32_t edx_31 = edx_30 + arg1[0x5e]
arg1[*((((esi_15 - 2) & 7) << 2) + &data_610a10) + 0x5f] = edx_31
arg1[*((((esi_15 - 1) & 7) << 2) + &data_610a10) + 0x5f] = arg1[0x5e] + edx_31
int32_t eax_180
int32_t edx_32
edx_32:eax_180 = muls.dp.d(0x66666667, arg1[7])
int32_t edx_33 = edx_32 s>> 2
arg1[0x3f] = (edx_33 u>> 0x1f) + edx_33
int32_t eax_184
int32_t edx_34
edx_34:eax_184 = muls.dp.d(0x66666667, arg1[0x16])
int32_t edx_35 = edx_34 s>> 1
arg1[0x49] = (edx_35 u>> 0x1f) + edx_35
int32_t eax_188
int32_t edx_36
edx_36:eax_188 = muls.dp.d(0x66666667, arg1[0x18])
int32_t edx_37 = edx_36 s>> 1
int32_t eax_189
int32_t edx_38
edx_38:eax_189 = muls.dp.d(0x66666667, arg1[0x19])
arg1[0x53] = (edx_37 u>> 0x1f) + edx_37
int32_t edx_39 = edx_38 s>> 1
int32_t result = (edx_39 u>> 0x1f) + edx_39
arg1[0x5d] = result
return result
