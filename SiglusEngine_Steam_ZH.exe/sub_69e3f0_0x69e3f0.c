// 函数: sub_69e3f0
// 地址: 0x69e3f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_4ebe384

if (eax u>= 0x4444443)
    int32_t* esi_1 = arg4[0xa]
    
    if (esi_1 != 0)
        bool cond:0_1 = esi_1[1] != 1
        esi_1[1]
        esi_1[1] -= 1
        
        if (not(cond:0_1))
            (*(*esi_1 + 4))()
            int32_t edi_1 = esi_1[2]
            esi_1[2] -= 1
            
            if (edi_1 == 1)
                (*(*esi_1 + 8))()
    
    j__free(arg4)
    sub_743191("map/set<T> too long")
    noreturn

data_4ebe384 = eax + 1
arg4[1] = arg3
void* ecx_3 = data_4ebe380

if (arg3 == ecx_3)
    *(ecx_3 + 4) = arg4
    *data_4ebe380 = arg4
    *(data_4ebe380 + 8) = arg4
else if (arg2 == 0)
    arg3[2] = arg4
    void* ecx_5 = data_4ebe380
    
    if (arg3 == *(ecx_5 + 8))
        *(ecx_5 + 8) = arg4
else
    *arg3 = arg4
    void** ecx_4 = data_4ebe380
    
    if (arg3 == *ecx_4)
        *ecx_4 = arg4

int32_t* esi_2 = arg4

if (*(arg4[1] + 0xc) == 0)
    do
        int32_t* eax_9 = esi_2[1]
        int32_t* edx_1 = eax_9[1]
        void* ecx_6 = *edx_1
        
        if (eax_9 == ecx_6)
            ecx_6 = edx_1[2]
            
            if (*(ecx_6 + 0xc) == 0)
                goto label_69e4e9
            
            if (esi_2 == eax_9[2])
                esi_2 = eax_9
                sub_69dfa0(esi_2)
            
            *(esi_2[1] + 0xc) = 1
            *(*(esi_2[1] + 4) + 0xc) = 0
            sub_69e000(*(esi_2[1] + 4))
        else if (*(ecx_6 + 0xc) != 0)
            if (esi_2 == *eax_9)
                esi_2 = eax_9
                sub_69e000(esi_2)
            
            *(esi_2[1] + 0xc) = 1
            *(*(esi_2[1] + 4) + 0xc) = 0
            void* ecx_7 = *(esi_2[1] + 4)
            int32_t* edx_2 = *(ecx_7 + 8)
            *(ecx_7 + 8) = *edx_2
            void* eax_22 = *edx_2
            
            if (*(eax_22 + 0xd) == 0)
                *(eax_22 + 4) = ecx_7
            
            edx_2[1] = *(ecx_7 + 4)
            void* eax_24 = data_4ebe380
            
            if (ecx_7 != *(eax_24 + 4))
                int32_t** eax_25 = *(ecx_7 + 4)
                
                if (ecx_7 != *eax_25)
                    eax_25[2] = edx_2
                else
                    *eax_25 = edx_2
            else
                *(eax_24 + 4) = edx_2
            
            *edx_2 = ecx_7
            *(ecx_7 + 4) = edx_2
        else
        label_69e4e9:
            eax_9[3].b = 1
            *(ecx_6 + 0xc) = 1
            *(*(esi_2[1] + 4) + 0xc) = 0
            esi_2 = *(esi_2[1] + 4)
    while (*(esi_2[1] + 0xc) == 0)

*(*(data_4ebe380 + 4) + 0xc) = 1
*arg1 = arg4
return arg1
