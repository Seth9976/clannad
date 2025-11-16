// 函数: sub_46b62e
// 地址: 0x46b62e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg2
void* const result = sub_46b56e(arg1, esi)

if (result != 0)
    int32_t edi
    int32_t var_c_1 = edi
    int32_t* edi_1 = arg1
    
    if (arg1 == 0)
    label_46b684:
        result = 1
    else
        while (true)
            if (edi_1[1] != 1)
                if (sub_46b589(edi_1, esi) != 0)
                    goto label_46b684
            else if (esi != 0 && *(esi + 4) == 1 && sub_46b589(edi_1[2], *(esi + 8)) != 0)
                edi_1 = edi_1[3]
                esi = *(esi + 0xc)
                
                if (edi_1 == 0)
                    goto label_46b684
                
                continue
            
            result = nullptr
            break

return result
