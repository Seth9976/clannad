// 函数: sub_7560a0
// 地址: 0x7560a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char const* const edi = arg5
int32_t i = 0
char var_28 = 0
char var_5 = 0
int32_t eax_1

if (*(edi + 4) s> 0x80)
    eax_1 = arg2[2]
else
    eax_1 = sx.d(arg2[2].b)

if (eax_1 s< 0xffffffff || eax_1 s>= *(edi + 4))
    _inconsistency()
    noreturn

int32_t* esi = arg1
uint32_t* result
int32_t* eax_14
int32_t* ecx
int32_t edx

if (*esi != 0xe06d7363)
    eax_14 = arg3
label_7563a7:
    
    if (*(edi + 0xc) u<= 0)
        goto label_7563cb
    
    if (arg6 == 0)
        sub_75643d(eax_14, edx, ecx, esi, arg2, eax_14, arg4, edi, eax_1, arg7, arg8)
    label_7563cb:
        result = __getptd()
        
        if (result[0x25] == 0)
            return result
        
        _inconsistency()
        noreturn
else
    if (esi[4] != 3)
    label_756201:
        eax_14 = arg3
        arg1 = eax_14
    label_75620c:
        
        if (*esi != 0xe06d7363 || esi[4] != 3
                || (esi[5] != 0x19930520 && esi[5] != 0x19930521 && esi[5] != 0x19930522))
            goto label_7563a7
        
        if (*(edi + 0xc) u> 0)
            int32_t var_2c
            int32_t var_14
            void* eax_15 = sub_749209(edi, arg7, eax_1, &var_14, &var_2c)
            int32_t ecx_4 = var_14
            
            if (ecx_4 u< var_2c)
                int32_t* edx_1 = eax_15 + 0x10
                int32_t eax_16 = eax_1
                int32_t* var_18_2 = edx_1
                
                do
                    if (edx_1[-4] s<= eax_16 && eax_16 s<= edx_1[-3])
                        int32_t* var_10_1 = *edx_1
                        int32_t edi_3 = edx_1[-1]
                        int32_t var_24_1 = edi_3
                        edi = arg5
                        
                        if (edi_3 s> 0)
                            int32_t* ecx_5 = var_10_1
                        label_7562ad:
                            int32_t* eax_18 = *(esi[7] + 0xc)
                            void* edx_2 = &eax_18[1]
                            int32_t eax_19 = *eax_18
                            
                            while (true)
                                if (eax_19 s<= 0)
                                    ecx_5 = &ecx_5[4]
                                    int32_t eax_24 = var_24_1 - 1
                                    var_10_1 = ecx_5
                                    var_24_1 = eax_24
                                    
                                    if (eax_24 s> 0)
                                        goto label_7562ad
                                    
                                    goto label_75631e
                                
                                char* eax_20 = *edx_2
                                
                                if (sub_756a5e(ecx_5, eax_20, esi[7]) != 0)
                                    int32_t var_50_4 = var_28.d
                                    var_5 = 1
                                    CatchIt(esi, arg2, arg1, arg4, edi, var_10_1, eax_20, 
                                        &edx_1[-4], arg7, arg8)
                                label_75631e:
                                    edx_1 = var_18_2
                                    eax_16 = eax_1
                                    ecx_4 = var_14
                                    break
                                
                                eax_19 -= 1
                                ecx_5 = var_10_1
                                edx_2 += 4
                    
                    ecx_4 += 1
                    edx_1 = &edx_1[5]
                    var_14 = ecx_4
                    var_18_2 = edx_1
                while (ecx_4 u< var_2c)
        
        if (arg6 != 0)
            ___DestructExceptionObject(esi)
        
        if (var_5 != 0)
            goto label_7563cb
        
        if ((*edi & 0x1fffffff) u>= 0x19930521 && *(edi + 0x1c) != 0
                && sub_756559(esi, *(edi + 0x1c)) == 0)
            __getptd()
            __getptd()
            __getptd()[0x22] = esi
            __getptd()[0x23] = arg1
            void** var_54_8
            
            var_54_8 = arg8 != 0 ? arg8 : arg2
            
            sub_7492b9(var_54_8, esi)
            int32_t var_50_10 = 0xffffffff
            ___FrameUnwindToState(arg2, arg4, edi)
            int32_t var_50_11 = *(edi + 0x1c)
            CallUnexpected()
            noreturn
        
        goto label_7563cb
    
    if (esi[5] == 0x19930520 || esi[5] == 0x19930521)
        if (esi[7] != 0)
            goto label_756201
    else if (esi[5] != 0x19930522 || esi[7] != 0)
        goto label_756201
    
    result = __getptd()
    
    if (result[0x22] == 0)
        return result
    
    esi = __getptd()[0x22]
    var_28 = 1
    arg1 = __getptd()[0x23]
    
    if (_ValidateRead(esi) == 0)
        _inconsistency()
        noreturn
    
    if (*esi == 0xe06d7363 && esi[4] == 3
            && (esi[5] == 0x19930520 || esi[5] == 0x19930521 || esi[5] == 0x19930522)
            && esi[7] == 0)
        _inconsistency()
        noreturn
    
    uint32_t* eax_6
    eax_6, ecx, edx = __getptd()
    int32_t* eax_8
    char eax_10
    
    if (eax_6[0x25] != 0)
        eax_8 = __getptd()[0x25]
        __getptd()[0x25] = 0
        eax_10, edx = sub_756559(esi, eax_8)
        ecx = eax_8
    
    if (eax_6[0x25] == 0 || eax_10 != 0)
        eax_14 = arg1
        goto label_75620c
    
    if (*eax_8 s> 0)
        void* eax_11 = nullptr
        arg5 = nullptr
        
        do
            if (type_info::operator==(*(eax_11 + eax_8[1] + 4), 
                    &class std::bad_exception `RTTI Type Descriptor') != 0)
                int32_t var_50_8 = 1
                ___DestructExceptionObject(esi)
                arg5 = "bad exception"
                struct std::exception::VTable* var_40
                std::exception::exception(&var_40, &arg5)
                var_40 = &std::bad_exception::`vftable'{for `std::exception'}
                sub_748f1b(&var_40, 0xb490b4)
                noreturn
            
            i += 1
            eax_11 = &arg5[0x10]
            arg5 = eax_11
        while (i s< *eax_8)
terminate()
noreturn
