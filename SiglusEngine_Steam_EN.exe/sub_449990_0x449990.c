// 函数: sub_449990
// 地址: 0x449990
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = data_12ff250

if (ecx == 0xffffffff)
    data_1af44c4 = 0x62
else if (ecx != 0)
    int32_t eax_1
    eax_1.b = ecx != 1
    data_1af44c4 = eax_1 + 0x62
else
    data_1af44c4 = ecx

sub_4c59d0()
HDC hDC = GetDC(data_7027bc)
int32_t var_18_1 = data_1af44c4
void* const edx

if (data_12ff254 != 1)
    int32_t eax_7 = sub_4c5c10(hDC, &data_6173e0, hDC)
    
    if (eax_7 != 1)
        int32_t var_18_5 = data_1af44c4
        int32_t eax_8 = sub_4c5c10(eax_7, "MS Gothic", hDC)
        
        if (eax_8 != 1)
            int32_t var_18_6 = data_1af44c4
            int32_t eax_9 = sub_4c5c10(eax_8, &data_6173c8, hDC)
            
            if (eax_9 != 1)
                int32_t var_18_7 = data_1af44c4
                edx = "MS Mincho"
                
                if (sub_4c5c10(eax_9, "MS Mincho", hDC) != 1)
                    edx = "Courier New"
            else
                edx = &data_6173c8
        else
            edx = "MS Gothic"
    else
        edx = &data_6173e0
else
    int32_t eax_3 = sub_4c5c10(hDC, &data_6173c8, hDC)
    
    if (eax_3 != 1)
        int32_t var_18_2 = data_1af44c4
        int32_t eax_4 = sub_4c5c10(eax_3, "MS Mincho", hDC)
        
        if (eax_4 != 1)
            int32_t var_18_3 = data_1af44c4
            int32_t eax_5 = sub_4c5c10(eax_4, &data_6173e0, hDC)
            
            if (eax_5 != 1)
                int32_t var_18_4 = data_1af44c4
                
                if (sub_4c5c10(eax_5, "MS Gothic", hDC) != 1)
                    edx = "Courier New"
                else
                    edx = "MS Gothic"
            else
                edx = &data_6173e0
        else
            edx = "MS Mincho"
    else
        edx = &data_6173c8

sub_4cfd70(&data_1af44a4, edx)
ReleaseDC(data_7027bc, hDC)

if (data_12ff258 != 0)
    HDC hDC_1 = GetDC(data_7027bc)
    int32_t var_18_10 = data_1af44c4
    int32_t eax_11 = sub_4c5c10(hDC_1, &data_12ff258, hDC_1)
    ReleaseDC(data_7027bc, hDC_1)
    
    if (eax_11 == 1)
        sub_4cfd70(&data_1af44a4, &data_12ff258)

int32_t esi_2 = data_12ff364
int32_t ecx_9 = 2
int32_t edi_2 = 1

if (data_12ff358 u<= 2)
    ecx_9 = data_12ff358

data_1af44a0 = ecx_9
int32_t result = 1

if (data_12ff35c u<= 1)
    result = data_12ff35c

if (data_12ff360 u<= 2)
    edi_2 = data_12ff360

data_1af449c = result
int32_t ecx_10 = 0
data_131d2c8 = edi_2

if (esi_2 + 1 u<= 3)
    ecx_10 = esi_2

data_1af4498 = ecx_10
sub_4cfdf0(esi_2 + 1, 0x12a3d3c, 0x20ae940, 0x40)
sub_4cfd70(&data_1af4478, &data_1af44a4)
data_1af4474 = edi_2
data_1af4470 = ecx_9
data_1af4264 = result
return result
