// 函数: sub_5ae7e0
// 地址: 0x5ae7e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg1 = *arg2
__builtin_memcpy(&arg1[1], &arg2[1], 0xa0)
void* edx = arg2[0x2a]
int32_t edi_1 = arg2[0x29]

if (edx != 0)
    *(edx + 4) += 1

arg1[0x29] = edi_1
int32_t* edi_2 = arg1[0x2a]
arg1[0x2a] = edx

if (edi_2 != 0)
    bool cond:0_1 = edi_2[1] != 1
    edi_2[1] -= 1
    
    if (not(cond:0_1))
        (*(*edi_2 + 4))()
        bool cond:1_1 = edi_2[2] != 1
        edi_2[2]
        edi_2[2] -= 1
        
        if (not(cond:1_1))
            (*(*edi_2 + 8))()

void* edx_2 = arg2[0x2c]
int32_t edi_3 = arg2[0x2b]

if (edx_2 != 0)
    *(edx_2 + 4) += 1

arg1[0x2b] = edi_3
int32_t* edi_4 = arg1[0x2c]
arg1[0x2c] = edx_2

if (edi_4 != 0)
    bool cond:2_1 = edi_4[1] != 1
    edi_4[1] -= 1
    
    if (not(cond:2_1))
        (*(*edi_4 + 4))()
        bool cond:3_1 = edi_4[2] != 1
        edi_4[2]
        edi_4[2] -= 1
        
        if (not(cond:3_1))
            (*(*edi_4 + 8))()

arg1[0x2d] = arg2[0x2d]
arg1[0x2e] = arg2[0x2e]
arg1[0x2f] = arg2[0x2f]
arg1[0x30] = arg2[0x30]
arg1[0x31] = arg2[0x31]
void* edx_4 = arg2[0x33]
int32_t edi_5 = arg2[0x32]

if (edx_4 != 0)
    *(edx_4 + 4) += 1

arg1[0x32] = edi_5
int32_t* edi_6 = arg1[0x33]
arg1[0x33] = edx_4

if (edi_6 != 0)
    bool cond:4_1 = edi_6[1] != 1
    edi_6[1] -= 1
    
    if (not(cond:4_1))
        (*(*edi_6 + 4))()
        bool cond:5_1 = edi_6[2] != 1
        edi_6[2]
        edi_6[2] -= 1
        
        if (not(cond:5_1))
            (*(*edi_6 + 8))()

void* edx_6 = arg2[0x35]
int32_t edi_7 = arg2[0x34]

if (edx_6 != 0)
    *(edx_6 + 4) += 1

arg1[0x34] = edi_7
int32_t* edi_8 = arg1[0x35]
arg1[0x35] = edx_6

if (edi_8 != 0)
    bool cond:6_1 = edi_8[1] != 1
    edi_8[1]
    edi_8[1] -= 1
    
    if (not(cond:6_1))
        (*(*edi_8 + 4))()
        bool cond:7_1 = edi_8[2] != 1
        edi_8[2]
        edi_8[2] -= 1
        
        if (not(cond:7_1))
            (*(*edi_8 + 8))()

void* eax_26 = &arg2[0x36]
int32_t i_1 = 4
void* var_8 = eax_26
void* edi_9 = &arg1[0x37]
int32_t i_2 = 4
int32_t i

do
    void* edx_8 = *(arg2 - arg1 + edi_9)
    int32_t esi_3 = *eax_26
    
    if (edx_8 != 0)
        *(edx_8 + 4) += 1
        eax_26 = var_8
        i_1 = i_2
    
    *(edi_9 - 4) = esi_3
    int32_t* esi_4 = *edi_9
    *edi_9 = edx_8
    
    if (esi_4 != 0)
        bool cond:9_1 = esi_4[1] != 1
        esi_4[1]
        esi_4[1] -= 1
        
        if (not(cond:9_1))
            (*(*esi_4 + 4))()
            bool cond:10_1 = esi_4[2] != 1
            esi_4[2]
            esi_4[2] -= 1
            
            if (not(cond:10_1))
                (*(*esi_4 + 8))()
        
        eax_26 = var_8
        i_1 = i_2
    
    eax_26 += 8
    edi_9 += 8
    i = i_1
    i_1 -= 1
    var_8 = eax_26
    i_2 = i_1
while (i != 1)
arg1[0x3e] = arg2[0x3e]
arg1[0x3f] = arg2[0x3f]
arg1[0x40] = arg2[0x40]
arg1[0x41] = arg2[0x41]
arg1[0x42] = arg2[0x42]
arg1[0x43] = arg2[0x43]
arg1[0x44] = arg2[0x44]
arg1[0x45] = arg2[0x45]
arg1[0x46] = arg2[0x46]
arg1[0x47] = arg2[0x47]
return arg1
