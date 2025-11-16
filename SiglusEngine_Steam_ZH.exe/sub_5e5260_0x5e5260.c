// 函数: sub_5e5260
// 地址: 0x5e5260
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = arg2

if (ecx.b != 0)
    int32_t i_2 = (*(arg1 + 0x1438) - *(arg1 + 0x1434)) s/ 0x15fc
    
    if (i_2 s> 0)
        int32_t esi_3 = 0
        int32_t i
        
        do
            *(arg1 + 0x1434)
            sub_5e5260(ecx)
            ecx = arg2
            esi_3 += 0x15fc
            i = i_2
            i_2 -= 1
        while (i != 1)

*(arg1 + 0x1550) = *(arg1 + 0x154c)
*(arg1 + 0x1558) = 0
*(arg1 + 0x1560) = *(arg1 + 0x155c)
*(arg1 + 0x1568) = 0
int32_t* esi_4 = *(arg1 + 0x156c)
*(arg1 + 0x156c) = 0

if (esi_4 != 0)
    bool cond:0_1 = esi_4[1] != 1
    esi_4[1]
    esi_4[1] -= 1
    
    if (not(cond:0_1))
        (*(*esi_4 + 4))()
        bool cond:2_1 = esi_4[2] != 1
        esi_4[2]
        esi_4[2] -= 1
        
        if (not(cond:2_1))
            (*(*esi_4 + 8))()

*(arg1 + 0x15ec) = 0
int32_t* esi_5 = *(arg1 + 0x15f0)
*(arg1 + 0x15f0) = 0

if (esi_5 != 0)
    bool cond:1_1 = esi_5[1] != 1
    esi_5[1]
    esi_5[1] -= 1
    
    if (not(cond:1_1))
        (*(*esi_5 + 4))()
        bool cond:4_1 = esi_5[2] != 1
        esi_5[2]
        esi_5[2] -= 1
        
        if (not(cond:4_1))
            (*(*esi_5 + 8))()

*(arg1 + 0x15f4) = 0
int32_t* esi_6 = *(arg1 + 0x15f8)
*(arg1 + 0x15f8) = 0

if (esi_6 != 0)
    bool cond:3_1 = esi_6[1] != 1
    esi_6[1]
    esi_6[1] -= 1
    
    if (not(cond:3_1))
        (*(*esi_6 + 4))()
        bool cond:6_1 = esi_6[2] != 1
        esi_6[2]
        esi_6[2] -= 1
        
        if (not(cond:6_1))
            (*(*esi_6 + 8))()

*(arg1 + 0x1570) = 0
int32_t* esi_7 = *(arg1 + 0x1574)
*(arg1 + 0x1574) = 0

if (esi_7 != 0)
    bool cond:5_1 = esi_7[1] != 1
    esi_7[1]
    esi_7[1] -= 1
    
    if (not(cond:5_1))
        (*(*esi_7 + 4))()
        bool cond:8_1 = esi_7[2] != 1
        esi_7[2]
        esi_7[2] -= 1
        
        if (not(cond:8_1))
            (*(*esi_7 + 8))()

*(arg1 + 0x1578) = 0
int32_t* esi_8 = *(arg1 + 0x157c)
*(arg1 + 0x157c) = 0

if (esi_8 != 0)
    bool cond:7_1 = esi_8[1] != 1
    esi_8[1]
    esi_8[1] -= 1
    
    if (not(cond:7_1))
        (*(*esi_8 + 4))()
        bool cond:9_1 = esi_8[2] != 1
        esi_8[2]
        esi_8[2] -= 1
        
        if (not(cond:9_1))
            (*(*esi_8 + 8))()

int32_t* esi_9 = *(arg1 + 0x1580)
sub_6efe60(esi_9)
esi_9[0x48] = 0
esi_9[0x49] = 0
esi_9[0x4a] = 0
esi_9[0x4b] = 0
sub_6efdb0(esi_9)
int32_t eax_24 = *(arg1 + 0x158c)

for (void* i_1 = *(arg1 + 0x1588); i_1 != eax_24; i_1 += 0x130)
    sub_6efc80(i_1)

int32_t* result = *(arg1 + 0x1588)
*(arg1 + 0x158c) = result
*(arg1 + 0x15e0) = 0
int32_t* esi_10 = *(arg1 + 0x15e4)
*(arg1 + 0x15e4) = 0

if (esi_10 != 0)
    result = &esi_10[1]
    bool cond:10_1 = *result != 1
    *result
    *result -= 1
    
    if (not(cond:10_1))
        (*(*esi_10 + 4))()
        result = &esi_10[2]
        int32_t ebx_4 = *result
        *result -= 1
        
        if (ebx_4 == 1)
            return (*(*esi_10 + 8))()

return result
