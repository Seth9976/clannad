// 函数: sub_45afb0
// 地址: 0x45afb0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1

if (data_7037c8 != 0 && data_703674 == 0)
    eax_1 = data_108f354

void* eax_5

if (data_7037c8 == 0 || data_703674 != 0
        || ((eax_1 == 1 || (eax_1 == 2 && data_13132e0 == 0)) && data_703678 != 2))
    eax_5 = 0xffffffff
else
    int32_t eax_2 = data_1af17b8
    int32_t eax_3 = neg.d(eax_2)
    eax_5 = sbb.d(eax_3, eax_3, eax_2 != 0) & 0xfffffffe

int32_t var_14 = 0
int32_t ecx = sub_45a190(eax_5, 0x19, 0, 0x19, eax_5, arg1)
int32_t eax_6 = data_1af17b0
int32_t eax_7 = neg.d(eax_6)
int32_t var_14_1 = 0
void* eax_9 = sbb.d(eax_7, eax_7, eax_6 != 0) & 0xfffffffe
int32_t ecx_1 = sub_45a190(eax_9, 0x1b, 0, 0x1b, eax_9, ecx)
int32_t eax_10 = data_13132f8
int32_t eax_11 = neg.d(eax_10)
int32_t var_14_2 = 0
void* eax_13 = sbb.d(eax_11, eax_11, eax_10 != 0) & 0xfffffffe
sub_45a190(eax_13, 0x1a, 0, 0x1a, eax_13, ecx_1)
int32_t ecx_2
ecx_2.b = 1
int32_t eax_14
int32_t ecx_3
eax_14, ecx_3 = sub_485d20(ecx_2)
int32_t eax_15 = neg.d(eax_14)
int32_t var_14_3 = 0
void* var_1c_3 = neg.d(sbb.d(eax_15, eax_15, eax_14 != 0)) - 1
sub_45a190(neg.d(sbb.d(eax_15, eax_15, eax_14 != 0)) - 1, 0x1f, 0, 0x1f, var_1c_3, ecx_3)
int32_t eax_19 = data_1cd5370
int32_t esi = 0xfffe7961

if (data_1cd53a0 == 0)
    eax_19 = 1

bool cond:8 = data_12dc4c4 == 0
data_1cd5370 = eax_19

if (not(cond:8))
    void* eax_25
    int32_t ecx_4
    
    if (data_108f384 != 0 && data_108f37c != 0)
        int32_t eax_20 = data_187a5c0
        int32_t eax_21 = neg.d(eax_20)
        int32_t var_14_4 = 1
        var_1c_3 = neg.d(sbb.d(eax_21, eax_21, eax_20 != 0)) - 1
        eax_25, ecx_4 =
            sub_45a190(neg.d(sbb.d(eax_21, eax_21, eax_20 != 0)) - 1, 0, 0, 0xbb8, var_1c_3, 1)
    else if (data_12dc5e0 == 0)
        esi = sub_4956b0(0)
        int32_t var_14_6 = esi
        eax_25, ecx_4 = sub_45a6f0()
    else
        int32_t eax_26 = data_187a5c0
        int32_t eax_27 = neg.d(eax_26)
        int32_t var_14_5 = 1
        var_1c_3 = neg.d(sbb.d(eax_27, eax_27, eax_26 != 0)) - 1
        eax_25, ecx_4 =
            sub_45a190(neg.d(sbb.d(eax_27, eax_27, eax_26 != 0)) - 1, 0, 0, 0, var_1c_3, 1)
    
    if (data_12dc4c4 != 0)
        if (data_108f378 != 0 && data_108f370 != 0)
            int32_t var_14_7 = 1
            sub_45a190(eax_25, 1, 0, 0xbb9, 0, ecx_4)
        else if (data_12dc5e0 == 0)
            if (esi == 0xfffe7961)
                esi = sub_4956b0(0)
            
            int32_t var_14_9 = esi
            sub_45a870(var_1c_3)
        else
            int32_t var_14_8 = 1
            sub_45a190(eax_25, 1, 0, 1, 0, ecx_4)

void* eax_33
int32_t ecx_5

if (data_139319c != 0)
    ecx_5 = 0
    eax_33.b = data_12a2d94 != 0
else
    ecx_5 = 0xffffffff
    eax_33 = nullptr

void* var_14_10 = eax_33
int32_t ecx_6 = sub_45a190(eax_33, 0xe, 0, 0xe, ecx_5, ecx_5)

if (arg2 != 0)
    BOOL eax_34 = data_1cd5370
    
    if (data_1cd53a0 == 0)
        eax_34 = 1
    
    bool cond:5_1 = data_108f390 == 0
    data_1cd5370 = eax_34
    
    if (cond:5_1 || data_108f388 == 0)
        int32_t ecx_7
        int32_t edx
        
        if (data_12a2d90 != 1)
            edx = 0
            ecx_7 = 0
        else
            HMENU hMenu_2 = data_1cd5340
            
            if (hMenu_2 != 0 && eax_34 != 0)
                AppendMenuA(hMenu_2, MF_SEPARATOR, 0, nullptr)
                data_1cd5370 = 0
            
            data_1cd53a0 = 0
            HMENU uIDNewItem = CreatePopupMenu()
            HMENU hMenu = data_1cd5340
            data_1cd5344 = uIDNewItem
            eax_34 = AppendMenuA(hMenu, MF_POPUP, uIDNewItem, 0x6197b8)
            edx = 1
            ecx_7 = 1
        
        ecx_6 = sub_45ab90(eax_34, edx, ecx_7, 0)
    else
        HMENU hMenu_1 = data_1cd5340
        
        if (hMenu_1 != 0 && eax_34 != 0)
            AppendMenuA(hMenu_1, MF_SEPARATOR, 0, nullptr)
            hMenu_1 = data_1cd5340
            data_1cd5370 = 0
        
        data_1cd53a0 = 0
        ecx_6 = AppendMenuA(hMenu_1, MF_BYCOMMAND, 0x59da, 0x6197b8)

void* eax_35 = data_1cd5370
int32_t var_14_11 = 0

if (data_1cd53a0 == 0)
    eax_35 = 1

data_1cd5370 = eax_35
int32_t ecx_8 = sub_45a190(eax_35, 0x18, 0, 0x18, 0, ecx_6)
int32_t eax_36 = data_1cd5370

if (data_1cd53a0 == 0)
    eax_36 = 1

data_1cd5370 = eax_36
void* eax_37
eax_37.b = data_12a2d94 != 0
void* var_14_12 = eax_37
int32_t ecx_9 = sub_45a190(eax_37, 0x1c, 0, 0x1c, 0, ecx_8)
void* eax_38
eax_38.b = data_12a2d94 != 0
void* var_14_13 = eax_38
void* eax_39
int32_t ecx_10
eax_39, ecx_10 = sub_45a190(eax_38, 0x1d, 0, 0x1d, 0, ecx_9)
int32_t var_14_14 = 0
return sub_45a190(eax_39, 0x1e, 0, 0x1e, 0, ecx_10)
