// 函数: sub_46e93f
// 地址: 0x46e93f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg2

while (true)
    if (esi != 0)
        int32_t eax_1 = *(esi + 4)
        
        if (eax_1 == 1)
            if (sub_46e93f(*(esi + 8)) == 0)
                break
            
            esi = *(esi + 0xc)
            continue
        else if (eax_1 == 6)
            esi = *(esi + 0x18)
            continue
        else
            if (eax_1 == 8)
                esi = *(esi + 0x10)
                continue
            else if (eax_1 != 9)
                if (eax_1 == 0xb)
                    esi = *(esi + 0x20)
                    continue
                else if (eax_1 != 0xd)
                    sub_46e3d1(arg1, nullptr, 0, "internal error: unknown node")
                    break
                
                esi = *(esi + 0x10)
                continue
            
            int32_t esi_1 = *(esi + 0x10)
            
            if (esi_1 s< 0)
                break
            
            if (esi_1 s> 2)
                break
    
    return 1

return 0
