// 函数: sub_5d53e0
// 地址: 0x5d53e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg1[1]

if (eax u>= 0x6666665)
    int32_t* esi = arg5[9]
    
    if (esi != 0)
        bool cond:0_1 = esi[1] != 1
        esi[1]
        esi[1] -= 1
        
        if (not(cond:0_1))
            (*(*esi + 4))()
            int32_t edi_1 = esi[2]
            esi[2] -= 1
            
            if (edi_1 == 1)
                (*(*esi + 8))()
    
    j__free(arg5)
    sub_743191("map/set<T> too long")
    noreturn

arg1[1] = eax + 1
arg5[1] = arg4
void* ecx_2 = *arg1

if (arg4 == ecx_2)
    *(ecx_2 + 4) = arg5
    **arg1 = arg5
    *(*arg1 + 8) = arg5
else if (arg3 == 0)
    arg4[2] = arg5
    void* ecx_4 = *arg1
    
    if (arg4 == *(ecx_4 + 8))
        *(ecx_4 + 8) = arg5
else
    *arg4 = arg5
    void** ecx_3 = *arg1
    
    if (arg4 == *ecx_3)
        *ecx_3 = arg5

int32_t* esi_1 = arg5

if (*(arg5[1] + 0xc) == 0)
    do
        int32_t* eax_9 = esi_1[1]
        int32_t* edx_1 = eax_9[1]
        void* ecx_5 = *edx_1
        int32_t* ecx_7
        int32_t** edx_2
        
        if (eax_9 == ecx_5)
            ecx_5 = edx_1[2]
            
            if (*(ecx_5 + 0xc) == 0)
                goto label_5d54fe
            
            if (esi_1 == eax_9[2])
                esi_1 = eax_9
                std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<void* const,struct xa8f75bd5::pair::operator[]::_Mutex_count_pair> > >::_Lrotate(
                    arg1, esi_1)
            
            *(esi_1[1] + 0xc) = 1
            *(*(esi_1[1] + 4) + 0xc) = 0
            ecx_7 = *(esi_1[1] + 4)
            edx_2 = *ecx_7
            *ecx_7 = edx_2[2]
            void* eax_15 = edx_2[2]
            
            if (*(eax_15 + 0xd) == 0)
                *(eax_15 + 4) = ecx_7
            
            edx_2[1] = ecx_7[1]
            void* eax_17 = *arg1
            
            if (ecx_7 != *(eax_17 + 4))
                void** eax_18 = ecx_7[1]
                
                if (ecx_7 != eax_18[2])
                    *eax_18 = edx_2
                    edx_2[2] = ecx_7
                else
                    eax_18[2] = edx_2
                    edx_2[2] = ecx_7
            else
                *(eax_17 + 4) = edx_2
                edx_2[2] = ecx_7
            
            ecx_7[1] = edx_2
        else if (*(ecx_5 + 0xc) != 0)
            if (esi_1 == *eax_9)
                esi_1 = eax_9
                std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<void* const,struct xa8f75bd5::pair::operator[]::_Mutex_count_pair> > >::_Rrotate(
                    arg1, esi_1)
            
            *(esi_1[1] + 0xc) = 1
            *(*(esi_1[1] + 4) + 0xc) = 0
            ecx_7 = *(esi_1[1] + 4)
            edx_2 = ecx_7[2]
            ecx_7[2] = *edx_2
            int32_t* eax_27 = *edx_2
            
            if (*(eax_27 + 0xd) == 0)
                eax_27[1] = ecx_7
            
            edx_2[1] = ecx_7[1]
            void* eax_29 = *arg1
            
            if (ecx_7 != *(eax_29 + 4))
                int32_t*** eax_30 = ecx_7[1]
                
                if (ecx_7 != *eax_30)
                    eax_30[2] = edx_2
                else
                    *eax_30 = edx_2
            else
                *(eax_29 + 4) = edx_2
            
            *edx_2 = ecx_7
            ecx_7[1] = edx_2
        else
        label_5d54fe:
            eax_9[3].b = 1
            *(ecx_5 + 0xc) = 1
            *(*(esi_1[1] + 4) + 0xc) = 0
            esi_1 = *(esi_1[1] + 4)
    while (*(esi_1[1] + 0xc) == 0)

*(*(*arg1 + 4) + 0xc) = 1
*arg2 = arg5
return arg2
