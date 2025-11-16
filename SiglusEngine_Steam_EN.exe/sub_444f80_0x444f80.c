// 函数: sub_444f80
// 地址: 0x444f80
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* ecx = __chkstk(0x2018)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
int32_t entry_ebx
int32_t var_8_1 = entry_ebx
char* esi = ecx
void* result = nullptr
data_1b8c260 = 0

if (arg1 != 0)
    *arg1 = 0x280

if (arg2 != 0)
    *arg2 = 0x1e0

while (true)
label_444fd0:
    entry_ebx.b = *esi
    
    if (entry_ebx.b == 0)
        break
    
    if (entry_ebx.b u>= 0x80 && (entry_ebx.b u< 0xa0 || entry_ebx.b u> 0xdf) && entry_ebx.b u< 0xfe)
        esi = &esi[2]
        continue
    
    char const* const edx_1 = "#MESSAGE_BUFFER_TYPE="
    char* ecx_2 = esi
    int32_t edi_1 = 0
    char* var_200c
    void* result_1
    void* result_2
    
    while (true)
        result_2.b = *ecx_2
        
        if (result_2.b == *edx_1)
            if (result_2.b u< 0x80)
            label_44502d:
                ecx_2 = &ecx_2[1]
                edx_1 = &edx_1[1]
                edi_1 += 1
            label_445030:
                
                if (edi_1 == 0x15)
                    break
                
                if (*ecx_2 != 0)
                    continue
                else if (*edx_1 == 0)
                    break
            else
                if (result_2.b u< 0xa0)
                    if (result_2.b u>= 0xfe)
                        goto label_44502d
                else if (result_2.b u<= 0xdf || result_2.b u>= 0xfe)
                    goto label_44502d
                
                result_2.b = ecx_2[1]
                
                if (result_2.b == edx_1[1])
                    ecx_2 = &ecx_2[2]
                    edx_1 = &edx_1[2]
                    edi_1 += 2
                    goto label_445030
        
        char const* const edx_3 = "#SCREENSIZE_MOD="
        char* ecx_4 = esi
        int32_t edi_2 = 0
        
        while (true)
            result_2.b = *ecx_4
            
            if (result_2.b == *edx_3)
                if (result_2.b u< 0x80)
                label_4450e1:
                    ecx_4 = &ecx_4[1]
                    edx_3 = &edx_3[1]
                    edi_2 += 1
                label_4450e4:
                    
                    if (edi_2 == 0x10)
                        break
                    
                    if (*ecx_4 != 0)
                        continue
                    else if (*edx_3 == 0)
                        break
                else
                    if (result_2.b u< 0xa0)
                        if (result_2.b u>= 0xfe)
                            goto label_4450e1
                    else if (result_2.b u<= 0xdf || result_2.b u>= 0xfe)
                        goto label_4450e1
                    
                    result_2.b = ecx_4[1]
                    
                    if (result_2.b == edx_3[1])
                        ecx_4 = &ecx_4[2]
                        edx_3 = &edx_3[2]
                        edi_2 += 2
                        goto label_4450e4
            
            int32_t eax_5
            int32_t ecx_9
            eax_5, ecx_9 = sub_4d0fe0(result_2.b, "#CAPTION="", esi, 0xa)
            
            if (eax_5 == 0)
                int32_t var_14_4 = ecx_9
                int32_t var_18_2 = 0x1000
                char var_1008[0xfec]
                char* var_1c_2 = &var_1008
                var_200c = &esi[0xa]
                void* eax_7 = sub_4d1140(&var_1008, &var_200c, &esi[0xa], var_1c_2, var_18_2)
                
                if (eax_7 != 0)
                    goto label_445254
                
                sub_4cfdf0(eax_7, &var_1008, &data_1b8c260, 0x80)
                esi = var_200c
                goto label_444fd0
            
            if (sub_4d0fe0(eax_5.b, "#D3D_ENABLE=", esi, 0xc) != 0)
                if (entry_ebx.b == 0xd && esi[1] == 0xa)
                    esi = &esi[2]
                    goto label_444fd0
                
                esi = &esi[1]
                goto label_444fd0
            
            void** var_14_7 = &result_1
            var_200c = &esi[0xc]
            
            if (sub_4d11d0(&result_1, &var_200c, &esi[0xc], var_14_7) != 0)
                goto label_445254
            
            esi = var_200c
            data_108feb8 = result_1
            goto label_444fd0
        
        void var_201c
        void* var_14_2 = &var_201c
        int32_t* var_18_1 = ecx_4
        var_200c = &esi[0x10]
        
        if (sub_4d1280(&result_1, &var_200c, &esi[0x10], &result_1, var_18_1) != 0)
            goto label_445254
        
        result = result_1
        void** ecx_7 = arg1
        void* var_2004
        
        if (ecx_7 != 0)
            *ecx_7 = var_2004
        
        if (arg2 == 0)
            goto label_445150
        
        esi = var_200c
        void* var_2000
        *arg2 = var_2000
        goto label_444fd0
    
    int32_t* var_14_1 = &result_1
    var_200c = &esi[0x15]
    
    if (sub_4d11d0(&result_1, &var_200c, &esi[0x15], var_14_1) != 0)
        data_1392714 = 1
        break
    
    result_2 = result_1
    
    if (result_2 == 0)
        esi = var_200c
        data_1392714 = 1
    else if (result_2 == 0x66)
    label_445150:
        esi = var_200c
    else
        esi = var_200c
        data_1392714 = result_2

label_445254:
sub_5f02dd(var_8_1 ^ &__saved_ebp)
return result
