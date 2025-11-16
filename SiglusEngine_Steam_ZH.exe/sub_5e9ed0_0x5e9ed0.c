// 函数: sub_5e9ed0
// 地址: 0x5e9ed0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1

if (arg3 != 0)
    sub_5e4fc0(arg1)
    sub_5e5260(arg1, 1)

void* edx = arg2
*(arg1 + 0x1ac) = *(edx + 0x1ac)
*(arg1 + 0x1b0) = *(edx + 0x1b0)
*(arg1 + 0x1b4) = *(edx + 0x1b4)
*(arg1 + 0x1b8) = *(edx + 0x1b8)
*(arg1 + 0x1bc) = *(edx + 0x1bc)
*(arg1 + 0x1cc) = *(edx + 0x1cc)
*(arg1 + 0x1d0) = *(edx + 0x1d0)
*(arg1 + 0x1e0) = *(edx + 0x1e0)
*(arg1 + 0x1f0) = *(edx + 0x1f0)
*(arg1 + 0x200) = *(edx + 0x200)
*(arg1 + 0x208) = *(edx + 0x208)
*(arg1 + 0x20c) = *(edx + 0x20c)
*(arg1 + 0x21c) = *(edx + 0x21c)
*(arg1 + 0x22c) = *(edx + 0x22c)
*(arg1 + 0x23c) = *(edx + 0x23c)
*(arg1 + 0x24c) = *(edx + 0x24c)
*(arg1 + 0x25c) = *(edx + 0x25c)
*(arg1 + 0x26c) = *(edx + 0x26c)
*(arg1 + 0x27c) = *(edx + 0x27c)
*(arg1 + 0x28c) = *(edx + 0x28c)
*(arg1 + 0x29c) = *(edx + 0x29c)
*(arg1 + 0x264) = *(edx + 0x264)
*(arg1 + 0x268) = *(edx + 0x268)
__builtin_memcpy(arg1 + 0x2a4, edx + 0x2a4, 0xb8)

if (arg1 + 0xd74 != edx + 0xd74)
    sub_52e3c0(arg1 + 0xd74, edx + 0xd74, 0, 0xffffffff)
    edx = arg2

if (arg1 + 0xd8c != edx + 0xd8c)
    sub_52e3c0(arg1 + 0xd8c, edx + 0xd8c, 0, 0xffffffff)
    edx = arg2

void* edx_1 = edx - arg1
void* esi_1 = arg1 + 0xda4
arg3.d = edx_1
int32_t i_3 = 8
int32_t i

do
    void** eax_10 = edx_1 + esi_1
    
    if (esi_1 != eax_10)
        sub_52e3c0(esi_1, eax_10, 0, 0xffffffff)
    
    esi_1 += 0x18
    i = i_3
    i_3 -= 1
while (i != 1)
void* esi_2

if (*(arg1 + 0x1ac) != 9)
    sub_5ea570(arg1)
    esi_2 = arg2
else
    esi_2 = arg2
    void* eax_11 = *(esi_2 + 0x156c)
    int32_t edi_1 = *(esi_2 + 0x1568)
    arg3.d = eax_11
    
    if (eax_11 != 0)
        *(eax_11 + 4) += 1
        eax_11 = arg3.d
    
    *(arg1 + 0x1568) = edi_1
    int32_t* edi_2 = *(arg1 + 0x156c)
    *(arg1 + 0x156c) = eax_11
    
    if (edi_2 != 0)
        bool cond:1_1 = edi_2[1] != 1
        edi_2[1] -= 1
        
        if (not(cond:1_1))
            (*(*edi_2 + 4))()
            bool cond:2_1 = edi_2[2] != 1
            edi_2[2]
            edi_2[2] -= 1
            
            if (not(cond:2_1))
                (*(*edi_2 + 8))()
    
    void* eax_18 = *(esi_2 + 0x15e4)
    int32_t edi_3 = *(esi_2 + 0x15e0)
    arg3.d = eax_18
    
    if (eax_18 != 0)
        *(eax_18 + 4)
        *(eax_18 + 4) += 1
        eax_18 = arg3.d
    
    *(arg1 + 0x15e0) = edi_3
    int32_t* edi_4 = *(arg1 + 0x15e4)
    *(arg1 + 0x15e4) = eax_18
    
    if (edi_4 != 0)
        bool cond:3_1 = edi_4[1] != 1
        edi_4[1]
        edi_4[1] -= 1
        
        if (not(cond:3_1))
            (*(*edi_4 + 4))()
            int32_t ecx_8 = edi_4[2]
            edi_4[2] -= 1
            
            if (ecx_8 == 1)
                (*(*edi_4 + 8))()
    
    *(arg1 + 0x15e8) = *(esi_2 + 0x15e8)

*(arg1 + 0x1558) = *(esi_2 + 0x1558)
sub_5b1ce0(arg1 + 0x155c, esi_2 + 0x155c)
sub_5f6ab0(arg1)
__builtin_memcpy(arg1 + 0x35c, esi_2 + 0x35c, 0x670)
int32_t eax_27
int32_t edx_5
edx_5:eax_27 = muls.dp.d(0x2e8ba2e9, *(arg2 + 0xa74) - *(arg2 + 0xa70))
int32_t edx_6 = edx_5 s>> 3
sub_55bdc0(arg1 + 0x9cc, (edx_6 u>> 0x1f) + edx_6)
int32_t* esi_4 = *(arg1 + 0xa70)
int32_t* edi_6 = *(arg2 + 0xa70)

if (edi_6 == *(arg2 + 0xa74))
    edi_6 = nullptr

if (esi_4 == *(arg1 + 0xa74))
    esi_4 = nullptr

int32_t eax_32
int32_t edx_7
edx_7:eax_32 = muls.dp.d(0x2e8ba2e9, *(arg2 + 0xa74) - *(arg2 + 0xa70))
int32_t edx_8 = edx_7 s>> 3
sub_748840(esi_4, edi_6, ((edx_8 u>> 0x1f) + edx_8) * 0x2c)
int32_t eax_38
int32_t edx_9
edx_9:eax_38 = muls.dp.d(0x2e8ba2e9, *(arg2 + 0xb30) - *(arg2 + 0xb2c))
int32_t edx_10 = edx_9 s>> 3
sub_55bdc0(arg1 + 0xa88, (edx_10 u>> 0x1f) + edx_10)
int32_t* esi_5 = *(arg1 + 0xb2c)
int32_t* edi_7 = *(arg2 + 0xb2c)

if (edi_7 == *(arg2 + 0xb30))
    edi_7 = nullptr

if (esi_5 == *(arg1 + 0xb30))
    esi_5 = nullptr

int32_t eax_43
int32_t edx_11
edx_11:eax_43 = muls.dp.d(0x2e8ba2e9, *(arg2 + 0xb30) - *(arg2 + 0xb2c))
int32_t edx_12 = edx_11 s>> 3
sub_748840(esi_5, edi_7, ((edx_12 u>> 0x1f) + edx_12) * 0x2c)
int32_t eax_49
int32_t edx_13
edx_13:eax_49 = muls.dp.d(0x2e8ba2e9, *(arg2 + 0xbec) - *(arg2 + 0xbe8))
int32_t edx_14 = edx_13 s>> 3
sub_55bdc0(arg1 + 0xb44, (edx_14 u>> 0x1f) + edx_14)
int32_t* esi_6 = *(arg1 + 0xbe8)
int32_t* edi_8 = *(arg2 + 0xbe8)

if (edi_8 == *(arg2 + 0xbec))
    edi_8 = nullptr

if (esi_6 == *(arg1 + 0xbec))
    esi_6 = nullptr

int32_t eax_54
int32_t edx_15
edx_15:eax_54 = muls.dp.d(0x2e8ba2e9, *(arg2 + 0xbec) - *(arg2 + 0xbe8))
int32_t edx_16 = edx_15 s>> 3
sub_748840(esi_6, edi_8, ((edx_16 u>> 0x1f) + edx_16) * 0x2c)
int32_t eax_60
int32_t edx_17
edx_17:eax_60 = muls.dp.d(0x2e8ba2e9, *(arg2 + 0xca8) - *(arg2 + 0xca4))
int32_t edx_18 = edx_17 s>> 3
sub_55bdc0(arg1 + 0xc00, (edx_18 u>> 0x1f) + edx_18)
int32_t* esi_7 = *(arg1 + 0xca4)
int32_t* edi_9 = *(arg2 + 0xca4)

if (edi_9 == *(arg2 + 0xca8))
    edi_9 = nullptr

if (esi_7 == *(arg1 + 0xca8))
    esi_7 = nullptr

int32_t eax_65
int32_t edx_19
edx_19:eax_65 = muls.dp.d(0x2e8ba2e9, *(arg2 + 0xca8) - *(arg2 + 0xca4))
int32_t edx_20 = edx_19 s>> 3
sub_748840(esi_7, edi_9, ((edx_20 u>> 0x1f) + edx_20) * 0x2c)
sub_55b310(arg1 + 0xcbc, (*(arg2 + 0xd64) - *(arg2 + 0xd60)) s>> 2)
int32_t* edx_21 = *(arg2 + 0xd60)
int32_t* ecx_35 = *(arg1 + 0xd60)

if (edx_21 == *(arg2 + 0xd64))
    edx_21 = nullptr

if (ecx_35 == *(arg1 + 0xd64))
    ecx_35 = nullptr

sub_748840(ecx_35, edx_21, (*(arg2 + 0xd64) - *(arg2 + 0xd60)) & 0xfffffffc)

if (arg1 + 0xe64 != arg2 + 0xe64)
    sub_52e3c0(arg1 + 0xe64, arg2 + 0xe64, 0, 0xffffffff)

if (arg1 + 0xe7c != arg2 + 0xe7c)
    sub_52e3c0(arg1 + 0xe7c, arg2 + 0xe7c, 0, 0xffffffff)

int32_t eax_79 = sub_6980b0(data_bac45c, arg1 + 0xe64)
*(arg1 + 0x348) = eax_79
int32_t eax_80
int32_t ecx_40
eax_80, ecx_40 = sub_697f50(eax_79, arg1 + 0xe7c)
*(arg1 + 0x34c) = eax_80
int32_t var_18_13 = ecx_40
sub_5bfb70(arg1 + 0xe94, arg2 + 0xe94)
int32_t edi_13 = (*(arg2 + 0x1208) - *(arg2 + 0x1204)) s/ 0x2cc
arg3.d = edi_13
void* ecx_45 = sub_55c0c0(arg1 + 0x1160, edi_13)

if (edi_13 s> 0)
    int32_t edi_14 = 0
    void* ecx_46 = ecx_45
    int32_t i_1
    
    do
        void* var_18_15 = ecx_46
        ecx_46 = *(arg1 + 0x1204) + edi_14
        sub_5bfb70(ecx_46, *(arg2 + 0x1204) + edi_14)
        edi_14 += 0x2cc
        i_1 = arg3.d
        arg3.d -= 1
    while (i_1 != 1)

sub_686e20(arg1 + 0x1298, arg2 + 0x1298)
int32_t edi_17 = (*(arg2 + 0x1438) - *(arg2 + 0x1434)) s/ 0x15fc
arg3.d = edi_17
int32_t result = sub_5570d0(arg1 + 0x1390, edi_17)

if (edi_17 s> 0)
    int32_t edi_18 = 0
    int32_t i_2
    
    do
        *(arg1 + 0x1434)
        result = sub_5e9ed0(*(arg2 + 0x1434) + edi_18, 0)
        edi_18 += 0x15fc
        i_2 = arg3.d
        arg3.d -= 1
    while (i_2 != 1)

return result
