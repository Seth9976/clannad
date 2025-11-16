// 函数: sub_619540
// 地址: 0x619540
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
void* esi = data_bac454
*(esi + 0x1c18) = 0
int32_t* edi = *(esi + 0x1c1c)
*(esi + 0x1c1c) = 0

if (edi != 0)
    bool cond:0_1 = edi[1] != 1
    edi[1]
    edi[1] -= 1
    
    if (not(cond:0_1))
        (*(*edi + 4))()
        bool cond:2_1 = edi[2] != 1
        edi[2]
        edi[2] -= 1
        
        if (not(cond:2_1))
            (*(*edi + 8))()

*(esi + 0x1c20) = 0
int32_t* edi_1 = *(esi + 0x1c24)
*(esi + 0x1c24) = 0

if (edi_1 != 0)
    bool cond:1_1 = edi_1[1] != 1
    edi_1[1]
    edi_1[1] -= 1
    
    if (not(cond:1_1))
        (*(*edi_1 + 4))()
        bool cond:4_1 = edi_1[2] != 1
        edi_1[2]
        edi_1[2] -= 1
        
        if (not(cond:4_1))
            (*(*edi_1 + 8))()

*(esi + 0x1c28) = 0
int32_t* edi_2 = *(esi + 0x1c2c)
*(esi + 0x1c2c) = 0

if (edi_2 != 0)
    bool cond:3_1 = edi_2[1] != 1
    edi_2[1]
    edi_2[1] -= 1
    
    if (not(cond:3_1))
        (*(*edi_2 + 4))()
        int32_t ebx_1 = edi_2[2]
        edi_2[2] -= 1
        
        if (ebx_1 == 1)
            (*(*edi_2 + 8))()

*(esi + 0x1c30) = 0
int32_t* result
result.b = 1
*(esi + 0x1c34) = 0
return result
