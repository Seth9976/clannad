// 函数: sub_486580
// 地址: 0x486580
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = 0
int32_t esi = 0
int32_t var_10 = 0
int32_t ecx = 0
int32_t var_8 = 0
int32_t edi = 0
int32_t var_c = 0
int32_t var_14 = 0

switch (data_1320e5c)
    case nullptr
        int32_t eax_1 = data_1320e60
        
        if (eax_1 == 3)
            esi = 1
        else if (eax_1 == 4)
            edi = 1
        else if (eax_1 == 0xf)
            edx = 1
            var_10 = 1
    case 1
        int32_t eax_2 = data_1320e60
        
        if (eax_2 == 3)
            esi = 1
        else if (eax_2 == 4)
            edi = 1
        else if (eax_2 == 0xf)
            ecx = 1
            var_14 = 1
    case 2
        int32_t eax_3 = data_1320e60
        
        if (eax_3 == 0)
            esi = 1
        else if (eax_3 == 1)
            edi = 1
        else if (eax_3 == 2)
            var_8 = 1
    case 4
        var_c = 1

void* eax
eax.b = data_13702a1
int32_t ecx_1

if (eax.b == 0)
    ecx_1 = data_1ff4cb4
label_48666c:
    int32_t eax_4
    
    if (esi != 0)
        int32_t edx_1 = data_13702a4
        
        if (eax.b != 0 || edx_1 != 0)
            eax_4 = data_1311170
            
            if (eax_4 s>= data_1af4e94 || eax_4 s>= 0x3e7)
                goto label_4867f9
            
        label_48669e:
            int32_t eax_5 = data_1af17c0
            
            if (edx_1 != 0)
                eax_5 = 1
            
            data_1af17c0 = eax_5
            return 1
        
    label_4867f4:
        eax_4 = data_1311170
    label_4867f9:
        
        if (data_137027e != 0 || data_137030e != 0)
            return 3
        
        edx_1 = data_1370334
        
        if (data_1370331 != 0 || edx_1 != 0 || data_1370108 != edx_1)
            if (eax_4 s>= data_1af4e94 || eax_4 s>= 0x3e7)
                return 0
            
            goto label_48669e
        
        int32_t ecx_6 = data_1370358
        
        if ((data_1370355 == edx_1.b && ecx_6 == 0 && data_1370104 == ecx_6) || eax_4 s<= 0)
            return 0
        
        int32_t eax_19 = data_1af17c0
        
        if (ecx_6 != 0)
            eax_19 = 1
        
        data_1af17c0 = eax_19
        return 2
    
    if (edi != 0)
        int32_t ecx_2 = data_13702a4
        
        if (eax.b == 0 && ecx_2 == 0)
            goto label_4867f4
        
        eax_4 = data_1311170
        
        if (eax_4 s<= 0)
            goto label_4867f9
        
        int32_t eax_7 = data_1af17c0
        
        if (ecx_2 != 0)
            eax_7 = 1
        
        data_1af17c0 = eax_7
        return 2
    
    if (var_8 != 0)
        if (eax.b != 0)
            sub_48d040(data_71929c, &data_7192a0)
            data_1b14a14 = data_131d2cc
            data_1b14a18 = data_1320e58
            data_1b14a1c = data_13132a8
            int32_t eax_12 = data_13132ac
            data_71929c = 0x23
            data_7192a0 = 0
            data_7192e0 = 0
            data_1b14a20 = eax_12
        
        goto label_4867f4
    
    if (var_c != 0)
        if (eax.b == 0)
            goto label_4867f4
        
        sub_445d80(data_1374234)
        return 0
    
    void* eax_14
    
    if (var_10 != 0)
        if (eax.b == 0)
            goto label_4867f4
        
        eax_14 = sub_488780()
    label_486793:
        int32_t ecx_5 = *(eax_14 + 0x2b64)
        
        if (ecx_5 != 0xffffffff)
            edx.b = *(eax_14 + 0x2b68)
            sub_4a35a0(eax_14, edx.b, ecx_5, 1)
        
        return 0
    
    if (var_14 != 0)
        if (eax.b == 0)
            goto label_4867f4
        
        eax_14 = data_1320e64 * 0x3920 + &data_f89afc
        goto label_486793
    
    if (ecx_1 == 0 || data_13702a2 == 0)
        goto label_4867f4
else
    if (esi != 0 || edi != 0 || var_8 != edi || var_c != edi || edx != 0 || ecx != 0)
        goto label_48665c
    
    eax, edx = sub_488940()
    
    if (eax.b != 0)
    label_486657:
        eax.b = data_13702a1
    label_48665c:
        ecx_1 = 0
        data_1ff4cb4 = 0
        goto label_48666c
    
    eax, edx = sub_488630()
    
    if (eax.b != 0)
        goto label_486657
    
    data_1ff4cb4 = 1
    
    if (data_13702a2 == 0)
        goto label_4867f4

if (sub_488940() != 0)
    goto label_4867f4

if (sub_488630() == 0)
    return 3

goto label_4867f4
