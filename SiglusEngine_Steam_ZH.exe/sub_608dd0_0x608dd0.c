// 函数: sub_608dd0
// 地址: 0x608dd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi_1 = *(arg1 + 0x148) - *(arg1 + 0x144)
struct _EXCEPTION_REGISTRATION_RECORD** result
int32_t edx
edx:result = muls.dp.d(0xba506bb7, esi_1)
int32_t i_2 = esi_1 s/ 0x15fc

if (i_2 s> 0)
    int32_t esi_2 = 0
    int32_t i
    
    do
        void* ecx_2 = *(arg1 + 0x144) + esi_2
        
        if (*(ecx_2 + 0xa0) != 0)
            result = sub_5f38a0(ecx_2)
        
        esi_2 += 0x15fc
        i = i_2
        i_2 -= 1
    while (i != 1)

void* esi_4 = data_bac498

if (*(esi_4 + 2) == 0)
    result = data_bac484
    
    if (result[0x4e].b == 0)
        result = data_bac458
        
        if (*(result + 0x37f) == 0)
            int32_t edx_3
            edx_3:result = muls.dp.d(0x4fba3d0b, *(arg1 + 0x43c) - *(arg1 + 0x438))
            int32_t edx_4 = edx_3 s>> 0xb
            int32_t i_4 = (edx_4 u>> 0x1f) + edx_4
            
            if (i_4 s> 0)
                int32_t esi_3 = 0
                int32_t i_3 = i_4
                int32_t i_1
                
                do
                    void* ecx_6 = *(arg1 + 0x438) + esi_3
                    result.b = arg2 == ecx_6
                    result = sub_5d8270(ecx_6, result.b)
                    esi_3 += 0x19b0
                    i_1 = i_3
                    i_3 -= 1
                while (i_1 != 1)
                esi_4 = data_bac498
    
    if (*(esi_4 + 2) == 0)
        result = data_bac484
        
        if (result[0x4e].b == 0)
            result = data_bac458
            
            if (*(result + 0x37f) == 0)
                return sub_5af7d0(arg1 + 0x4cc)

return result
