// 函数: sub_69fb30
// 地址: 0x69fb30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
uint32_t var_8 = __security_cookie ^ &__saved_ebp
char* esi = data_bac498
int32_t* ebx = arg1
void* var_424 = arg2
int32_t* var_434 = ebx
uint32_t hMenu
hMenu.b = esi[4]
char var_40d = 0

if (hMenu.b != 0 || esi[8] != hMenu.b || esi[0xa] != hMenu.b || esi[0xc] != hMenu.b)
    var_40d = 1

void** var_418
char var_414

if (hMenu.b != 0)
    int32_t eax_1
    eax_1.b = *esi
    var_414 = eax_1.b
    void** eax_4
    
    if (*(data_bac4e4 + 0x19a) == 0)
        var_418.b = sub_660000()
        eax_4 = data_bac510 + 0xb598
    else
        var_418.b = sub_660000()
        eax_4 = data_bac510 + 0xb5b4
    
    hMenu = *ebx
    
    if (hMenu != 0)
        hMenu, arg2 =
            sub_6c7d00(ebx, GetMenuItemCount(hMenu), var_424 + 1, eax_4, var_418.b, var_414)
        esi = data_bac498

if (esi[8] != 0)
    hMenu.b = esi[1]
    var_414 = hMenu.b
    void** eax_8
    eax_8.b = esi[9] != 0
    hMenu = *ebx
    
    if (hMenu != 0)
        hMenu, arg2 = sub_6c7d00(ebx, GetMenuItemCount(hMenu), var_424 + 2, data_bac510 + 0xb5d0, 
            eax_8.b, var_414)
        esi = data_bac498

if (esi[0xa] != 0)
    void* eax_12
    eax_12.b = *(data_bac4e4 + 0x141)
    void** eax_13
    eax_13.b = esi[0xb] != 0
    hMenu = *ebx
    
    if (hMenu != 0)
        hMenu, arg2 = sub_6c7d00(ebx, GetMenuItemCount(hMenu), var_424 + 3, data_bac510 + 0xb5ec, 
            eax_13.b, eax_12.b)
        esi = data_bac498

if (esi[0xc] != 0)
    hMenu.b = esi[2]
    var_418.b = hMenu.b
    
    if (esi[0xd] != 0)
        var_414.d = 1
    
    if (esi[0xd] == 0 || *(data_bac458 + 0x34d) != 0)
        var_414.d = 0
    
    HMENU hMenu_1 = *ebx
    
    if (hMenu_1 != 0)
        sub_6c7d00(ebx, GetMenuItemCount(hMenu_1), var_424 + 4, data_bac510 + 0xb608, var_414, 
            var_418.b)
        esi = data_bac498

if (esi[0x10] != 0 || esi[0x12] != 0 || esi[0x14] != 0)
    if (var_40d != 0)
        HMENU hMenu_2 = *ebx
        
        if (hMenu_2 != 0)
            sub_6c7f40(ebx, GetMenuItemCount(hMenu_2))
            esi = data_bac498
    
    var_40d = 1

if (esi[0x10] != 0)
    void* ecx_13
    
    if (esi[0x11] != 0)
        ecx_13 = data_bac504
        var_414.d = 1
    
    if (esi[0x11] == 0 || *(ecx_13 + 0x98) == *(ecx_13 + 0x9c))
        var_414.d = 0
    
    HMENU hMenu_3 = *ebx
    
    if (hMenu_3 != 0)
        sub_6c7d00(ebx, GetMenuItemCount(hMenu_3), var_424 + 5, data_bac510 + 0xb640, var_414, 0)
        esi = data_bac498

if (esi[0x12] != 0)
    int32_t eax_26
    eax_26.b = esi[0x13] != 0
    var_414.d = eax_26
    HMENU hMenu_4 = *ebx
    
    if (hMenu_4 != 0)
        sub_6c7d00(ebx, GetMenuItemCount(hMenu_4), var_424 + 6, data_bac510 + 0xb65c, var_414, 0)
        esi = data_bac498

if (esi[0x14] != 0)
    void* ecx_20
    
    if (esi[0x15] != 0)
        ecx_20 = data_bac504
        var_414.d = 1
    
    if (esi[0x15] == 0 || *(ecx_20 + 0xbc) == *(ecx_20 + 0xc0))
        var_414.d = 0
    
    HMENU hMenu_5 = *ebx
    
    if (hMenu_5 != 0)
        sub_6c7d00(ebx, GetMenuItemCount(hMenu_5), var_424 + 7, data_bac510 + 0xb678, var_414, 0)
        esi = data_bac498

if (esi[0x16] != 0)
    if (var_40d != 0)
        HMENU hMenu_6 = *ebx
        
        if (hMenu_6 != 0)
            sub_6c7f40(ebx, GetMenuItemCount(hMenu_6))
            esi = data_bac498
    
    var_40d = 1
    
    if (esi[0x16] != 0)
        var_414.d = *(data_bac4d0 + 0x10)
        int32_t eax_36
        eax_36.b = esi[0x17]
        var_418.b = eax_36.b
        HMENU hMenu_7 = *ebx
        
        if (hMenu_7 != 0)
            sub_6c7d00(ebx, GetMenuItemCount(hMenu_7), var_424 + 8, data_bac510 + 0xb694, 
                var_418.b, var_414.d != 0)
            esi = data_bac498

char var_41d = 0
int32_t eax_41 = *(data_bac510 + 0xb738)
var_414.d = eax_41

if (eax_41 s> 0)
    int32_t ecx_30 = 0
    
    if (eax_41 s> 0)
        arg2 = &esi[0x22]
        
        do
            if (ecx_30 u<= 3)
                eax_41.b = *arg2
                
                if (eax_41.b != 0)
                    var_41d = 1
                    break
                
                eax_41 = var_414.d
            
            ecx_30 += 1
            arg2 += 3
        while (ecx_30 s< eax_41)

int32_t eax_43 = *(data_bac510 + 0xb7ac)
var_414.d = eax_43
int32_t ecx_31

if (eax_43 s> 0)
    ecx_31 = 0

if (eax_43 s> 0 && eax_43 s> 0)
    arg2 = &esi[0x30]
    
    while (true)
        if (ecx_31 u<= 3)
            eax_43.b = *arg2
            
            if (eax_43.b != 0)
                break
            
            eax_43 = var_414.d
        
        ecx_31 += 1
        arg2 += 8
        
        if (ecx_31 s>= eax_43)
            goto label_69ffcc
    
    goto label_69ffdc

label_69ffcc:

if (var_41d != 0)
label_69ffdc:
    
    if (var_40d != 0)
        HMENU hMenu_8 = *ebx
        
        if (hMenu_8 != 0)
            int32_t item_1
            item_1, arg2 = GetMenuItemCount(hMenu_8)
            HMENU hmenu = *ebx
            
            if (hmenu != 0)
                int32_t lpmi_1
                _memset(&lpmi_1, 0, 0x30)
                lpmi_1 = 0x30
                int32_t var_4fc_1 = 0x10
                int32_t var_4f8_1 = 0x800
                InsertMenuItemW(hmenu, item_1, 1, &lpmi_1)
            
            esi = data_bac498
    
    var_40d = 1

int32_t eax_45 = *(data_bac510 + 0xb738)
void** var_41c

if (eax_45 s> 0)
    int32_t i = 0
    
    if (eax_45 s> 0)
        void* eax_46 = nullptr
        int32_t ecx_32 = 0
        void* var_42c_1 = nullptr
        int32_t var_418_1 = 0
        
        do
            if (i u<= 3)
                arg2.b = esi[ecx_32 + 0x22]
                
                if (arg2.b != 0)
                    eax_46.b = esi[ecx_32 + 0x24]
                    var_41c.b = eax_46.b
                    
                    if (esi[ecx_32 + 0x23] != 0)
                        var_414 = 1
                    
                    if (esi[ecx_32 + 0x23] == 0 || arg2.b == 0)
                        var_414 = 0
                    
                    HMENU hMenu_9 = *ebx
                    
                    if (hMenu_9 != 0)
                        sub_6c7d00(ebx, GetMenuItemCount(hMenu_9), var_424 + 0x64 + i, 
                            data_bac510 + 0xb740 + var_42c_1, var_414, var_41c.b)
                        esi = data_bac498
                        ecx_32 = var_418_1
                    
                    eax_46 = var_42c_1
            
            i += 1
            var_42c_1 = eax_46 + 0x1c
            ecx_32 += 3
            var_418_1 = ecx_32
            eax_46 = var_42c_1
        while (i s< *(data_bac510 + 0xb738))

uint32_t result = *(data_bac510 + 0xb7ac)
void** item

if (result s> 0)
    HMENU hMenu_11 = nullptr
    void* i_1 = nullptr
    var_41c.b = 0
    void* i_2 = nullptr
    
    if (result s> 0)
        int32_t edi_2 = 0
        int32_t var_430_2 = 0
        
        do
            if (i_1 u<= 3)
                int32_t eax_56 = i_1 << 3
                int32_t var_418_2 = eax_56
                eax_56.b = esi[eax_56 + 0x30]
                
                if (eax_56.b != 0)
                    if (hMenu_11 != 0 && var_41c.b != 0)
                        DestroyMenu(hMenu_11)
                    
                    char var_41d_1 = 0
                    HMENU hMenu_13 = CreateMenu()
                    esi = data_bac498
                    hMenu_11 = hMenu_13
                    uint32_t eax_57 = zx.d(var_41d_1)
                    var_414.d = hMenu_11
                    
                    if (hMenu_11 != 0)
                        eax_57 = 1
                    
                    HMENU hMenu_12 = hMenu_11
                    var_41c = eax_57
                    char var_438_1 = eax_57.b
                    void** eax_58
                    
                    if (*(var_418_2 + esi + 0x31) != 0)
                        int32_t j = 0
                        
                        if (*(var_430_2 + data_bac510 + 0xb7d0) s> 0)
                            int32_t esi_1 = var_430_2
                            
                            do
                                var_414.d = sub_661350(i_2)
                                
                                if (hMenu_11 != 0)
                                    sub_6c7d00(&hMenu_12, GetMenuItemCount(hMenu_11), 
                                        var_418_2 + var_424 + 0x12c + j, 
                                        data_bac510 + 0xb7d4 + esi_1, 1, j == var_414.d)
                                    hMenu_11 = hMenu_12
                                
                                j += 1
                                esi_1 += 0x18
                            while (j s< *(var_430_2 + data_bac510 + 0xb7d0))
                            
                            eax_58.b = var_438_1
                            esi = data_bac498
                            ebx = var_434
                            var_414.d = hMenu_11
                            var_41c = eax_58
                        
                        edi_2 = var_430_2
                    
                    eax_58.b = esi[var_418_2 + 0x31]
                    item.b = eax_58.b
                    void** eax_66 = data_bac510 + 0xb7b8 + edi_2
                    HMENU hMenu_10 = *ebx
                    
                    if (hMenu_10 != 0)
                        int32_t eax_67
                        int32_t ecx_47
                        eax_67, ecx_47 = GetMenuItemCount(hMenu_10)
                        int32_t var_540_26 = ecx_47
                        sub_6c7e30(ebx, eax_67, i_2 + var_424 + 0xc8, eax_66, var_414.d, item.b)
                        esi = data_bac498
                        hMenu_11 = var_414.d
                    
                    i_1 = i_2
            
            i_1 += 1
            edi_2 += 0xe4
            i_2 = i_1
            var_430_2 = edi_2
        while (i_1 s< *(data_bac510 + 0xb7ac))
        
        if (hMenu_11 != 0 && var_41c.b != 0)
            DestroyMenu(hMenu_11)
            esi = data_bac498

if (esi[0x18] != 0 || esi[0x1a] != 0)
    if (var_40d != 0)
        result = *ebx
        
        if (result != 0)
            result = GetMenuItemCount(result)
            HMENU hmenu_1 = *ebx
            
            if (hmenu_1 != 0)
                int32_t lpmi_2
                _memset(&lpmi_2, 0, 0x30)
                lpmi_2 = 0x30
                int32_t var_4cc_1 = 0x10
                int32_t var_4c8_1 = 0x800
                InsertMenuItemW(hmenu_1, result, 1, &lpmi_2)
            
            esi = data_bac498
    
    var_40d = 1

if (esi[0x18] != 0)
    void** eax_69 = data_bac510 + 0xb6b0
    result = *ebx
    
    if (result != 0)
        result = GetMenuItemCount(result)
        
        if (*ebx != 0)
            void** eax_70 = eax_69
            
            if (eax_70[5] u>= 8)
                eax_70 = *eax_70
            
            void var_40c
            _wcscpy_s(&var_40c, 0x100, eax_70)
            int32_t lpmi_3
            _memset(&lpmi_3, 0, 0x30)
            lpmi_3 = 0x30
            void* var_490_1 = var_424 + 9
            void* var_47c_1 = &var_40c
            int32_t var_49c_1 = 0x13
            int32_t var_498_1 = 0
            int32_t var_494_1 = 0
            int32_t var_478_1 = 0x100
            InsertMenuItemW(*ebx, result, 1, &lpmi_3)
        
        esi = data_bac498

if (esi[0x1a] != 0)
    void** eax_74 = data_bac510 + 0xb6cc
    result = *ebx
    
    if (result != 0)
        result = GetMenuItemCount(result)
        
        if (*ebx != 0)
            void** eax_75 = eax_74
            
            if (eax_75[5] u>= 8)
                eax_75 = *eax_75
            
            void var_20c
            _wcscpy_s(&var_20c, 0x100, eax_75)
            int32_t lpmi_4
            _memset(&lpmi_4, 0, 0x30)
            lpmi_4 = 0x30
            void* var_460_1 = var_424 + 0xa
            void* var_44c_1 = &var_20c
            int32_t var_46c_1 = 0x13
            int32_t var_468_1 = 0
            int32_t var_464_1 = 0
            int32_t var_448_1 = 0x100
            InsertMenuItemW(*ebx, result, 1, &lpmi_4)
        
        esi = data_bac498

if (esi[0x1c] != 0 || esi[0x1e] != 0 || esi[0x20] != 0)
    if (var_40d != 0)
        result = *ebx
        
        if (result != 0)
            result = GetMenuItemCount(result)
            HMENU hmenu_2 = *ebx
            item = result
            
            if (hmenu_2 != 0)
                int32_t lpmi
                _memset(&lpmi, 0, 0x30)
                lpmi = 0x30
                int32_t var_52c_1 = 0x10
                int32_t var_528_1 = 0x800
                InsertMenuItemW(hmenu_2, item, 1, &lpmi)
            
            esi = data_bac498
    
    var_40d = 1

if (esi[0x1c] != 0)
    result.b = esi[0x1d]
    item.b = result.b
    result = *ebx
    
    if (result != 0)
        sub_6c7d00(ebx, GetMenuItemCount(result), var_424 + 0xb, data_bac510 + 0xb6e8, item.b, 0)
        esi = data_bac498

if (esi[0x1e] != 0)
    result.b = esi[0x1f]
    item.b = result.b
    result = *ebx
    
    if (result != 0)
        sub_6c7d00(ebx, GetMenuItemCount(result), var_424 + 0xc, data_bac510 + 0xb704, item.b, 0)
        esi = data_bac498

if (esi[0x20] != 0 || var_40d == 0)
    result.b = esi[0x21]
    item.b = result.b
    result = *ebx
    
    if (result != 0)
        sub_6c7d00(ebx, GetMenuItemCount(result), var_424, data_bac510 + 0xb720, item.b, 0)

result.b = 1
sub_745f2b(var_8 ^ &__saved_ebp)
return result
