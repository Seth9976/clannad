// 函数: sub_4d1691
// 地址: 0x4d1691
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebp
int32_t var_4 = ebp
int32_t esi
int32_t var_8 = esi
int32_t* esp = &var_8
void* esi_1 = arg1
int32_t result

while (true)
    if (esi_1 != 0)
        int32_t eax_1 = *(esi_1 + 4)
        int32_t var_c
        
        if (eax_1 == 1)
            int32_t edi
            var_c = edi
            int32_t var_10 = *(esi_1 + 0xc)
            int32_t eax_11 = sub_4d1691(var_10)
            result = sub_4d1691(*(esi_1 + 8)) + eax_11
            esp = &var_10
            break
        
        if (eax_1 == 6)
            esi_1 = *(esi_1 + 0x18)
            continue
        else
            if (eax_1 == 8)
                var_c = *(esi_1 + 0x10)
                esp = &var_c
                result = sub_4d1691(var_c) * *(esi_1 + 0x14)
                break
            
            if (eax_1 == 9)
                result = *(esi_1 + 0x1c) * *(esi_1 + 0x18)
                break
            
            if (eax_1 == 0xb)
                esi_1 = *(esi_1 + 0x20)
                continue
    
    result = 0
    break

*esp
esp[1]
return result
