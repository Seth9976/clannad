// 函数: sub_6ff380
// 地址: 0x6ff380
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == arg2)
    return 

int32_t* edi_1 = arg1 + 0x48

do
    int32_t* esi_1 = *edi_1
    
    if (esi_1 != 0)
        bool cond:0_1 = esi_1[1] != 1
        esi_1[1] -= 1
        
        if (not(cond:0_1))
            (*(*esi_1 + 4))()
            bool cond:1_1 = esi_1[2] != 1
            esi_1[2] -= 1
            
            if (not(cond:1_1))
                (*(*esi_1 + 8))()
    
    edi_1 = &edi_1[0x14]
while (&edi_1[-0x12] != arg2)
