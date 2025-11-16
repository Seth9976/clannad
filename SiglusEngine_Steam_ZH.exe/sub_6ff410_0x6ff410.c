// 函数: sub_6ff410
// 地址: 0x6ff410
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int128_t* result = arg4

if (arg3 != arg2)
    int32_t* esi_1 = arg3 + 0x44
    
    do
        if (result != 0)
            *result = *(esi_1 - 0x44)
            result[1] = *(esi_1 - 0x34)
            result[2] = *(esi_1 - 0x24)
            result[3] = *(esi_1 - 0x14)
            result[4].d = esi_1[-1]
            *(result + 0x44) = *esi_1
            void* ecx_2 = esi_1[1]
            *(result + 0x48) = ecx_2
            
            if (ecx_2 != 0)
                *(ecx_2 + 4)
                *(ecx_2 + 4) += 1
            
            *(result + 0x4c) = esi_1[2].b
            *(result + 0x4d) = *(esi_1 + 9)
        
        esi_1 = &esi_1[0x14]
        result = &result[5]
    while (&esi_1[-0x11] != arg2)

return result
