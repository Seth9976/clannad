// 函数: sub_4de1c0
// 地址: 0x4de1c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi
void* edi_1 = *(arg1 + 0x1b0)
int32_t result = *(edi_1 + 0x10)

if (result != 0)
    result = *(arg1 + 0x50)
    
    if (result != 0)
        result = sub_4dd960(arg1)
        
        if (result != 0)
            *(edi_1 + 0xc) = sub_4dda90
            *(arg1 + 0xa0) = 0
            return result
    
    *(edi_1 + 0xc) = sub_4dd7e0

*(arg1 + 0xa0) = 0
return result
