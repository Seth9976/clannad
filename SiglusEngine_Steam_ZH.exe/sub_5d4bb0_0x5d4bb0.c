// 函数: sub_5d4bb0
// 地址: 0x5d4bb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = arg3
sub_563d80(&arg3)
int32_t* edx = eax
int32_t** esi = *edx
int32_t** esi_1
int32_t** edi

if (*(esi + 0xd) == 0)
    if (*(edx[2] + 0xd) != 0)
        edi = esi
        goto label_5d4bf7
    
    int32_t* ecx_1 = arg3
    edi = ecx_1[2]
    
    if (ecx_1 == edx)
        goto label_5d4bf7
    
    esi[1] = ecx_1
    *ecx_1 = *edx
    
    if (ecx_1 != edx[2])
        esi_1 = ecx_1[1]
        
        if (*(edi + 0xd) == 0)
            edi[1] = esi_1
        
        *esi_1 = edi
        ecx_1[2] = edx[2]
        *(edx[2] + 4) = ecx_1
    else
        esi_1 = ecx_1
    
    void* eax_11 = *arg1
    
    if (*(eax_11 + 4) != edx)
        int32_t** eax_12 = edx[1]
        
        if (*eax_12 != edx)
            eax_12[2] = ecx_1
        else
            *eax_12 = ecx_1
    else
        *(eax_11 + 4) = ecx_1
    
    ecx_1[1] = edx[1]
    int32_t eax_13
    eax_13.b = edx[3].b
    int32_t* edx_1 = ecx_1
    ecx_1.b = ecx_1[3].b
    edx_1[3].b = eax_13.b
    edx = eax
    edx[3].b = ecx_1.b
else
    edi = edx[2]
label_5d4bf7:
    esi_1 = edx[1]
    
    if (*(edi + 0xd) == 0)
        edi[1] = esi_1
    
    void* eax_2 = *arg1
    
    if (*(eax_2 + 4) == edx)
        *(eax_2 + 4) = edi
    else if (*esi_1 != edx)
        esi_1[2] = edi
    else
        *esi_1 = edi
    
    int32_t* eax_3 = *arg1
    
    if (*eax_3 == edx)
        int32_t** ecx_2
        
        if (*(edi + 0xd) == 0)
            int32_t* eax_4 = *edi
            ecx_2 = edi
            
            while (*(eax_4 + 0xd) == 0)
                ecx_2 = eax_4
                eax_4 = *ecx_2
            
            eax_3 = *arg1
        else
            ecx_2 = esi_1
        
        *eax_3 = ecx_2
    
    if (*(*arg1 + 8) == edx)
        if (*(edi + 0xd) == 0)
            edx = eax
            *(*arg1 + 8) = sub_563d60(edi)
        else
            *(*arg1 + 8) = esi_1

if (edx[3].b == 1)
    if (edi != *(*arg1 + 4))
        while (edi[3].b == 1)
            int32_t* ecx_6 = *esi_1
            
            if (edi != ecx_6)
                if (ecx_6[3].b == 0)
                    ecx_6[3].b = 1
                    esi_1[3].b = 0
                    std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<void* const,struct xa8f75bd5::pair::operator[]::_Mutex_count_pair> > >::_Rrotate(
                        arg1, esi_1)
                    ecx_6 = *esi_1
                
                if (*(ecx_6 + 0xd) == 0)
                    if (*(ecx_6[2] + 0xc) != 1 || *(*ecx_6 + 0xc) != 1)
                        if ((*ecx_6)[3].b == 1)
                            *(ecx_6[2] + 0xc) = 1
                            ecx_6[3].b = 0
                            std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<void* const,struct xa8f75bd5::pair::operator[]::_Mutex_count_pair> > >::_Lrotate(
                                arg1, ecx_6)
                            ecx_6 = *esi_1
                        
                        int32_t** eax_24
                        eax_24.b = esi_1[3].b
                        ecx_6[3].b = eax_24.b
                        esi_1[3].b = 1
                        *(*ecx_6 + 0xc) = 1
                        std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<void* const,struct xa8f75bd5::pair::operator[]::_Mutex_count_pair> > >::_Rrotate(
                            arg1, esi_1)
                        break
                    
                    ecx_6[3].b = 0
            else
                ecx_6 = esi_1[2]
                
                if (ecx_6[3].b == 0)
                    ecx_6[3].b = 1
                    esi_1[3].b = 0
                    std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<void* const,struct xa8f75bd5::pair::operator[]::_Mutex_count_pair> > >::_Lrotate(
                        arg1, esi_1)
                    ecx_6 = esi_1[2]
                
                if (*(ecx_6 + 0xd) == 0)
                    if (*(*ecx_6 + 0xc) != 1 || *(ecx_6[2] + 0xc) != 1)
                        if (ecx_6[2][3].b == 1)
                            *(*ecx_6 + 0xc) = 1
                            ecx_6[3].b = 0
                            std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<void* const,struct xa8f75bd5::pair::operator[]::_Mutex_count_pair> > >::_Rrotate(
                                arg1, ecx_6)
                            ecx_6 = esi_1[2]
                        
                        void** eax_18
                        eax_18.b = esi_1[3].b
                        ecx_6[3].b = eax_18.b
                        esi_1[3].b = 1
                        *(ecx_6[2] + 0xc) = 1
                        std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<void* const,struct xa8f75bd5::pair::operator[]::_Mutex_count_pair> > >::_Lrotate(
                            arg1, esi_1)
                        break
                    
                    ecx_6[3].b = 0
            
            edi = esi_1
            esi_1 = esi_1[1]
            
            if (edi == *(*arg1 + 4))
                break
        
        edx = eax
    
    edi[3].b = 1

int32_t* esi_2 = edx[9]

if (esi_2 != 0)
    bool cond:2_1 = esi_2[1] != 1
    esi_2[1]
    esi_2[1] -= 1
    
    if (not(cond:2_1))
        (*(*esi_2 + 4))()
        int32_t edi_1 = esi_2[2]
        esi_2[2] -= 1
        
        if (edi_1 == 1)
            (*(*esi_2 + 8))()
        
        edx = eax

j__free(edx)
int32_t eax_30 = arg1[1]
int32_t* ecx_16 = arg3

if (eax_30 != 0)
    arg1[1] = eax_30 - 1

*arg2 = ecx_16
return arg2
