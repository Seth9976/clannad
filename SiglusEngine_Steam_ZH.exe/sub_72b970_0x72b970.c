// 函数: sub_72b970
// 地址: 0x72b970
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg2
int32_t edi = arg1[0x65]
*(*arg1 + 0x14) = 0x7c
*(*arg1 + 0x18) = edi
*(*arg1 + 0x1c) = esi
(*(*arg1 + 4))(arg1, 0xffffffff)

while (true)
    int32_t esi_1
    
    if (edi s< 0xc0)
        esi_1 = 2
    else if (edi - 0xd0 u> 7 || edi == ((esi + 1) & 7) + 0xd0 || edi == ((esi + 2) & 7) + 0xd0)
        esi_1 = 3
    else if (edi == ((esi - 1) & 7) + 0xd0 || edi == ((esi - 2) & 7) + 0xd0)
        esi_1 = 2
    else
        esi_1 = 1
    
    *(*arg1 + 0x14) = 0x63
    *(*arg1 + 0x18) = edi
    *(*arg1 + 0x1c) = esi_1
    (*(*arg1 + 4))(arg1, 4)
    
    if (esi_1 == 1)
        arg1[0x65] = 0
    else if (esi_1 == 2)
        if (sub_72b400(arg1) == 0)
            break
        
        edi = arg1[0x65]
        esi = arg2
        continue
    else if (esi_1 != 3)
        esi = arg2
        continue
    
    int32_t result
    result.b = 1
    return result

return 0
