// 函数: sub_6efe60
// 地址: 0x6efe60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_c = arg1
*(arg1 + 0xa4) = 0
int32_t* esi = *(arg1 + 0xa8)
*(arg1 + 0xa8) = 0

if (esi != 0)
    bool cond:0_1 = esi[1] != 1
    esi[1] -= 1
    
    if (not(cond:0_1))
        (*(*esi + 4))()
        bool cond:2_1 = esi[2] != 1
        esi[2]
        esi[2] -= 1
        
        if (not(cond:2_1))
            (*(*esi + 8))()

*(arg1 + 0xac) = 0
int32_t* esi_1 = *(arg1 + 0xb0)
*(arg1 + 0xb0) = 0

if (esi_1 != 0)
    bool cond:1_1 = esi_1[1] != 1
    esi_1[1] -= 1
    
    if (not(cond:1_1))
        (*(*esi_1 + 4))()
        bool cond:4_1 = esi_1[2] != 1
        esi_1[2]
        esi_1[2] -= 1
        
        if (not(cond:4_1))
            (*(*esi_1 + 8))()

*(arg1 + 0xc8) = 0
int32_t* esi_2 = *(arg1 + 0xcc)
*(arg1 + 0xcc) = 0

if (esi_2 != 0)
    bool cond:3_1 = esi_2[1] != 1
    esi_2[1] -= 1
    
    if (not(cond:3_1))
        (*(*esi_2 + 4))()
        bool cond:6_1 = esi_2[2] != 1
        esi_2[2]
        esi_2[2] -= 1
        
        if (not(cond:6_1))
            (*(*esi_2 + 8))()

*(arg1 + 0xd0) = 0
int32_t* esi_3 = *(arg1 + 0xd4)
*(arg1 + 0xd4) = 0

if (esi_3 != 0)
    bool cond:5_1 = esi_3[1] != 1
    esi_3[1] -= 1
    
    if (not(cond:5_1))
        (*(*esi_3 + 4))()
        bool cond:7_1 = esi_3[2] != 1
        esi_3[2]
        esi_3[2] -= 1
        
        if (not(cond:7_1))
            (*(*esi_3 + 8))()

void* edi_1 = arg1 + 0xdc
int32_t i_1 = 4
int32_t i

do
    *(edi_1 - 4) = 0
    int32_t* esi_4 = *edi_1
    *edi_1 = 0
    
    if (esi_4 != 0)
        bool cond:8_1 = esi_4[1] != 1
        esi_4[1] -= 1
        
        if (not(cond:8_1))
            (*(*esi_4 + 4))()
            bool cond:9_1 = esi_4[2] != 1
            esi_4[2]
            esi_4[2] -= 1
            
            if (not(cond:9_1))
                (*(*esi_4 + 8))()
    
    edi_1 += 8
    i = i_1
    i_1 -= 1
while (i != 1)
