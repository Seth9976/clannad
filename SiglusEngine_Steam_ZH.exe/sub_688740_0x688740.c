// 函数: sub_688740
// 地址: 0x688740
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_4ebe328

if (eax u>= 0x5555554)
    sub_687cd0(&arg4[4])
    j__free(arg4)
    sub_743191("map/set<T> too long")
    noreturn

data_4ebe328 = eax + 1
arg4[1] = arg3
void* ecx = data_4ebe324

if (arg3 == ecx)
    *(ecx + 4) = arg4
    *data_4ebe324 = arg4
    *(data_4ebe324 + 8) = arg4
else if (arg2 == 0)
    arg3[2] = arg4
    void* ecx_2 = data_4ebe324
    
    if (arg3 == *(ecx_2 + 8))
        *(ecx_2 + 8) = arg4
else
    *arg3 = arg4
    int32_t* ecx_1 = data_4ebe324
    
    if (arg3 == *ecx_1)
        *ecx_1 = arg4

int32_t* esi = arg4

if (*(arg4[1] + 0xc) == 0)
    do
        int32_t* eax_6 = esi[1]
        int32_t* edx_1 = eax_6[1]
        void* ecx_3 = *edx_1
        int32_t* ecx_4
        int32_t** edx_2
        
        if (eax_6 == ecx_3)
            ecx_3 = edx_1[2]
            
            if (*(ecx_3 + 0xc) == 0)
                goto label_688847
            
            if (esi == eax_6[2])
                esi = eax_6
                std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<void* const,struct xa8f75bd5::pair::operator[]::_Mutex_count_pair> > >::_Lrotate(
                    &data_4ebe324, esi)
            
            *(esi[1] + 0xc) = 1
            *(*(esi[1] + 4) + 0xc) = 0
            ecx_4 = *(esi[1] + 4)
            edx_2 = *ecx_4
            *ecx_4 = edx_2[2]
            void* eax_12 = edx_2[2]
            
            if (*(eax_12 + 0xd) == 0)
                *(eax_12 + 4) = ecx_4
            
            edx_2[1] = ecx_4[1]
            void* eax_14 = data_4ebe324
            
            if (ecx_4 != *(eax_14 + 4))
                void** eax_15 = ecx_4[1]
                
                if (ecx_4 != eax_15[2])
                    *eax_15 = edx_2
                    edx_2[2] = ecx_4
                else
                    eax_15[2] = edx_2
                    edx_2[2] = ecx_4
            else
                *(eax_14 + 4) = edx_2
                edx_2[2] = ecx_4
            
            ecx_4[1] = edx_2
        else if (*(ecx_3 + 0xc) != 0)
            if (esi == *eax_6)
                esi = eax_6
                std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<void* const,struct xa8f75bd5::pair::operator[]::_Mutex_count_pair> > >::_Rrotate(
                    &data_4ebe324, esi)
            
            *(esi[1] + 0xc) = 1
            *(*(esi[1] + 4) + 0xc) = 0
            ecx_4 = *(esi[1] + 4)
            edx_2 = ecx_4[2]
            ecx_4[2] = *edx_2
            int32_t* eax_24 = *edx_2
            
            if (*(eax_24 + 0xd) == 0)
                eax_24[1] = ecx_4
            
            edx_2[1] = ecx_4[1]
            void* eax_26 = data_4ebe324
            
            if (ecx_4 != *(eax_26 + 4))
                int32_t*** eax_27 = ecx_4[1]
                
                if (ecx_4 != *eax_27)
                    eax_27[2] = edx_2
                else
                    *eax_27 = edx_2
            else
                *(eax_26 + 4) = edx_2
            
            *edx_2 = ecx_4
            ecx_4[1] = edx_2
        else
        label_688847:
            eax_6[3].b = 1
            *(ecx_3 + 0xc) = 1
            *(*(esi[1] + 4) + 0xc) = 0
            esi = *(esi[1] + 4)
    while (*(esi[1] + 0xc) == 0)

*(*(data_4ebe324 + 4) + 0xc) = 1
*arg1 = arg4
return arg1
