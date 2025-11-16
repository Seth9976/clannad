// 函数: sub_701200
// 地址: 0x701200
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_4ebe4ac

if (eax u>= 0x5555554)
    sub_687cd0(&arg4[4])
    j__free(arg4)
    sub_743191("map/set<T> too long")
    noreturn

data_4ebe4ac = eax + 1
arg4[1] = arg3
void* ecx = data_4ebe4a8

if (arg3 == ecx)
    *(ecx + 4) = arg4
    *data_4ebe4a8 = arg4
    *(data_4ebe4a8 + 8) = arg4
else if (arg2 == 0)
    arg3[2] = arg4
    void* ecx_2 = data_4ebe4a8
    
    if (arg3 == *(ecx_2 + 8))
        *(ecx_2 + 8) = arg4
else
    *arg3 = arg4
    int32_t* ecx_1 = data_4ebe4a8
    
    if (arg3 == *ecx_1)
        *ecx_1 = arg4

int32_t* esi = arg4

if (*(arg4[1] + 0xc) == 0)
    do
        int32_t* eax_6 = esi[1]
        int32_t* edx_1 = eax_6[1]
        void* ecx_3 = *edx_1
        
        if (eax_6 == ecx_3)
            ecx_3 = edx_1[2]
            
            if (*(ecx_3 + 0xc) == 0)
                goto label_7012be
            
            if (esi == eax_6[2])
                esi = eax_6
                sub_700d00(esi)
            
            *(esi[1] + 0xc) = 1
            *(*(esi[1] + 4) + 0xc) = 0
            sub_700d60(*(esi[1] + 4))
        else if (*(ecx_3 + 0xc) != 0)
            if (esi == *eax_6)
                esi = eax_6
                sub_700d60(esi)
            
            *(esi[1] + 0xc) = 1
            *(*(esi[1] + 4) + 0xc) = 0
            void* ecx_4 = *(esi[1] + 4)
            int32_t* edx_2 = *(ecx_4 + 8)
            *(ecx_4 + 8) = *edx_2
            void* eax_19 = *edx_2
            
            if (*(eax_19 + 0xd) == 0)
                *(eax_19 + 4) = ecx_4
            
            edx_2[1] = *(ecx_4 + 4)
            void* eax_21 = data_4ebe4a8
            
            if (ecx_4 != *(eax_21 + 4))
                int32_t** eax_22 = *(ecx_4 + 4)
                
                if (ecx_4 != *eax_22)
                    eax_22[2] = edx_2
                else
                    *eax_22 = edx_2
            else
                *(eax_21 + 4) = edx_2
            
            *edx_2 = ecx_4
            *(ecx_4 + 4) = edx_2
        else
        label_7012be:
            eax_6[3].b = 1
            *(ecx_3 + 0xc) = 1
            *(*(esi[1] + 4) + 0xc) = 0
            esi = *(esi[1] + 4)
    while (*(esi[1] + 0xc) == 0)

*(*(data_4ebe4a8 + 4) + 0xc) = 1
*arg1 = arg4
return arg1
