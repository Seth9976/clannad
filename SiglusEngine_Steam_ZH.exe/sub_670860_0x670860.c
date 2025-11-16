// 函数: sub_670860
// 地址: 0x670860
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg3
sub_563d80(&arg3)
int32_t* edx = *ebx
void** edx_1
int32_t* esi
int32_t* edi

if (*(edx + 0xd) == 0)
    if (*(ebx[2] + 0xd) != 0)
        edi = edx
        goto label_6708a6
    
    int32_t* ecx_1 = arg3
    edi = ecx_1[2]
    
    if (ecx_1 == ebx)
        goto label_6708a6
    
    edx[1] = ecx_1
    *ecx_1 = *ebx
    
    if (ecx_1 != ebx[2])
        esi = ecx_1[1]
        
        if (*(edi + 0xd) == 0)
            edi[1] = esi
        
        *esi = edi
        ecx_1[2] = ebx[2]
        *(ebx[2] + 4) = ecx_1
    else
        esi = ecx_1
    
    void* eax_11 = *arg1
    
    if (*(eax_11 + 4) != ebx)
        void** eax_12 = ebx[1]
        
        if (*eax_12 != ebx)
            eax_12[2] = ecx_1
        else
            *eax_12 = ecx_1
    else
        *(eax_11 + 4) = ecx_1
    
    int32_t* edx_3 = ecx_1
    ecx_1[1] = ebx[1]
    int32_t eax_13
    eax_13.b = ebx[3].b
    ecx_1.b = ecx_1[3].b
    edx_3[3].b = eax_13.b
    edx_1 = arg1
    ebx[3].b = ecx_1.b
else
    edi = ebx[2]
label_6708a6:
    esi = ebx[1]
    
    if (*(edi + 0xd) == 0)
        edi[1] = esi
    
    edx_1 = arg1
    void* eax_2 = *edx_1
    
    if (*(eax_2 + 4) == ebx)
        *(eax_2 + 4) = edi
    else if (*esi != ebx)
        esi[2] = edi
    else
        *esi = edi
    
    int32_t* eax_3 = *edx_1
    
    if (*eax_3 == ebx)
        int32_t* ecx_2
        
        if (*(edi + 0xd) == 0)
            int32_t* eax_4 = *edi
            ecx_2 = edi
            
            while (*(eax_4 + 0xd) == 0)
                ecx_2 = eax_4
                eax_4 = *ecx_2
            
            eax_3 = *edx_1
        else
            ecx_2 = esi
        
        *eax_3 = ecx_2
    
    void* eax_5 = *edx_1
    
    if (*(eax_5 + 8) == ebx)
        if (*(edi + 0xd) == 0)
            edx_1 = arg1
            *(eax_5 + 8) = sub_563d60(edi)
        else
            *(eax_5 + 8) = esi

void** esi_1

if (ebx[3].b != 1)
    esi_1 = arg1
else
    if (edi != *(*edx_1 + 4))
        while (edi[3].b == 1)
            int32_t* ecx_6 = *esi
            
            if (edi != ecx_6)
                if (ecx_6[3].b == 0)
                    ecx_6[3].b = 1
                    esi[3].b = 0
                    std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<void* const,struct xa8f75bd5::pair::operator[]::_Mutex_count_pair> > >::_Rrotate(
                        edx_1, esi)
                    ecx_6 = *esi
                    edx_1 = arg1
                
                if (*(ecx_6 + 0xd) == 0)
                    if (*(ecx_6[2] + 0xc) != 1 || *(*ecx_6 + 0xc) != 1)
                        if ((*ecx_6)[3].b == 1)
                            *(ecx_6[2] + 0xc) = 1
                            ecx_6[3].b = 0
                            std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<void* const,struct xa8f75bd5::pair::operator[]::_Mutex_count_pair> > >::_Lrotate(
                                edx_1, ecx_6)
                            ecx_6 = *esi
                        
                        int32_t** eax_24
                        eax_24.b = esi[3].b
                        ecx_6[3].b = eax_24.b
                        esi[3].b = 1
                        esi_1 = arg1
                        *(*ecx_6 + 0xc) = 1
                        std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<void* const,struct xa8f75bd5::pair::operator[]::_Mutex_count_pair> > >::_Rrotate(
                            esi_1, esi)
                        edi[3].b = 1
                        goto label_670ab4
                    
                    ecx_6[3].b = 0
            else
                ecx_6 = esi[2]
                
                if (ecx_6[3].b == 0)
                    ecx_6[3].b = 1
                    esi[3].b = 0
                    std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<void* const,struct xa8f75bd5::pair::operator[]::_Mutex_count_pair> > >::_Lrotate(
                        edx_1, esi)
                    ecx_6 = esi[2]
                    edx_1 = arg1
                
                if (*(ecx_6 + 0xd) == 0)
                    if (*(*ecx_6 + 0xc) != 1 || *(ecx_6[2] + 0xc) != 1)
                        if (ecx_6[2][3].b == 1)
                            *(*ecx_6 + 0xc) = 1
                            ecx_6[3].b = 0
                            std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<void* const,struct xa8f75bd5::pair::operator[]::_Mutex_count_pair> > >::_Rrotate(
                                edx_1, ecx_6)
                            ecx_6 = esi[2]
                        
                        void** eax_18
                        eax_18.b = esi[3].b
                        ecx_6[3].b = eax_18.b
                        esi[3].b = 1
                        esi_1 = arg1
                        *(ecx_6[2] + 0xc) = 1
                        std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<void* const,struct xa8f75bd5::pair::operator[]::_Mutex_count_pair> > >::_Lrotate(
                            esi_1, esi)
                        edi[3].b = 1
                        goto label_670ab4
                    
                    ecx_6[3].b = 0
            
            edi = esi
            esi = esi[1]
            
            if (edi == *(*edx_1 + 4))
                break
    
    esi_1 = arg1
    edi[3].b = 1

label_670ab4:
sub_670c00(&ebx[0xa])

if (ebx[9] u>= 0x10)
    j__free(ebx[4])

ebx[9] = 0xf
ebx[8] = 0
ebx[4].b = 0
j__free(ebx)
int32_t eax_26 = esi_1[1]
int32_t* ecx_14 = arg3

if (eax_26 != 0)
    esi_1[1] = eax_26 - 1

*arg2 = ecx_14
return arg2
