// 函数: sub_6dc630
// 地址: 0x6dc630
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void* ebx = arg4
int32_t edi = arg2
int32_t var_4e4 = edi

if (edi == 0)
    ebx = nullptr

*(arg3 + 0x90) = edi
*(arg3 + 0x94) = 0
arg4 = ebx
int32_t ecx_7
char* edx_2

while (true)
    if (*(arg3 + 0x88) == 0)
        if (*(arg3 + 0x134) == 0)
            uint32_t i
            
            do
                sub_6d8610(arg3, 0)
                i = sub_6d84f0(arg3)
                bool cond:2_1 = *(arg3 + 0x11c) != 0x49444154
                *(arg3 + 0x134) = i
                
                if (cond:2_1)
                    sub_6d42e0(arg3, "Not enough image data")
                    noreturn
            while (i == 0)
        
        uint32_t edi_1 = *(arg3 + 0x2a0)
        uint32_t eax_2 = *(arg3 + 0x134)
        char* ebx_1 = *(arg3 + 0x298)
        
        if (edi_1 u> eax_2)
            edi_1 = eax_2
        
        if (ebx_1 == 0)
        label_6dc708:
            
            if (edi_1 - 1 u<= 0xfffffffe)
                int32_t eax_5 = *(arg3 + 0x254)
                char* eax_6
                
                if (eax_5 == 0)
                    eax_6 = _malloc(edi_1)
                else
                    eax_6 = eax_5(arg3, edi_1)
                
                ebx_1 = eax_6
            
            if (edi_1 - 1 u> 0xfffffffe || ebx_1 == 0)
                sub_6d47a0(arg3, "insufficient memory to read chunk")
                noreturn
            
            *(arg3 + 0x298) = ebx_1
            *(arg3 + 0x29c) = edi_1
        else if (edi_1 u> *(arg3 + 0x29c))
            int32_t eax_3 = *(arg3 + 0x258)
            *(arg3 + 0x298) = 0
            *(arg3 + 0x29c) = 0
            
            if (eax_3 == 0)
                _free(ebx_1)
            else
                eax_3(arg3, ebx_1)
            
            goto label_6dc708
        
        int32_t eax_7 = *(arg3 + 0x5c)
        
        if (eax_7 == 0)
            sub_6d42e0(arg3, "Call to NULL read function")
            noreturn
        
        sub_6caa70(eax_7(arg3, ebx_1, edi_1), ebx_1, arg3, edi_1)
        *(arg3 + 0x84) = ebx_1
        *(arg3 + 0x134) -= edi_1
        ebx = arg4
        *(arg3 + 0x88) = edi_1
        edi = var_4e4
    
    if (edi == 0)
        *(arg3 + 0x94) = 0x400
        void var_4e0
        *(arg3 + 0x90) = &var_4e0
    else
        void* eax_9 = 0xffffffff
        
        if (ebx u< 0xffffffff)
            eax_9 = ebx
        
        ebx -= eax_9
        *(arg3 + 0x94) = eax_9
    
    int32_t* eax_10 = sub_724e00(arg3 + 0x84, 0)
    int32_t* edx_1 = eax_10
    
    if (edi == 0)
        eax_10 = 0x400 - *(arg3 + 0x94)
        ebx += eax_10
    else
        ebx += *(arg3 + 0x94)
    
    arg4 = ebx
    *(arg3 + 0x94) = 0
    
    if (edx_1 == 1)
        *(arg3 + 0x74) |= 8
        *(arg3 + 0x78) |= 8
        bool cond:3_1 = *(arg3 + 0x88) u> 0
        *(arg3 + 0x90) = 0
        
        if (cond:3_1 || *(arg3 + 0x134) u> 0)
            if ((*(arg3 + 0x78) & 0x100000) == 0)
                sub_6d47a0(arg3, "Extra compressed data")
                noreturn
            
            char var_e0[0xd8]
            sub_6d4690(eax_10, &var_e0, arg3, "Extra compressed data")
            eax_10 = sub_6d4470(arg3, &var_e0)
        
        if (ebx != 0)
            ecx_7 = arg3
            
            if (edi != 0)
                sub_6d42e0(ecx_7, "Not enough image data")
                noreturn
            
            edx_2 = "Too much image data"
            break
    else
        if (edx_1 != 0)
            ecx_7 = arg3
            sub_6cb6b0(ecx_7, edx_1)
            edx_2 = *(arg3 + 0x9c)
            
            if (edi == 0)
                break
            
            sub_6d47a0(ecx_7, edx_2)
            noreturn
        
        if (ebx != 0)
            continue
    
    sub_745f2b(eax_1 ^ &__saved_ebp)
    return eax_10

int32_t* eax_11 = sub_6d4840(ecx_7, edx_2)
sub_745f2b(eax_1 ^ &__saved_ebp)
return eax_11
