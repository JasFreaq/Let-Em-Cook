//////////////////////////////////////////////////////
// Copyright (C) Microsoft. 2018. All rights reserved.
//////////////////////////////////////////////////////


// This is automatically generated by PlayFab SDKGenerator. DO NOT modify this manually!
#include "Core/PlayFabExperimentationAPI.h"
#include "Core/PlayFabSettings.h"
#include "Core/PlayFabResultHandler.h"
#include "PlayFab.h"

using namespace PlayFab;
using namespace PlayFab::ExperimentationModels;

UPlayFabExperimentationAPI::UPlayFabExperimentationAPI() {}

UPlayFabExperimentationAPI::~UPlayFabExperimentationAPI() {}

int UPlayFabExperimentationAPI::GetPendingCalls() const
{
    return PlayFabRequestHandler::GetPendingCalls();
}

FString UPlayFabExperimentationAPI::GetBuildIdentifier() const
{
    return PlayFabSettings::buildIdentifier;
}


bool UPlayFabExperimentationAPI::CreateExclusionGroup(
    ExperimentationModels::FCreateExclusionGroupRequest& request,
    const FCreateExclusionGroupDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Experimentation/CreateExclusionGroup"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabExperimentationAPI::OnCreateExclusionGroupResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabExperimentationAPI::OnCreateExclusionGroupResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FCreateExclusionGroupDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    ExperimentationModels::FCreateExclusionGroupResult outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabExperimentationAPI::CreateExperiment(
    ExperimentationModels::FCreateExperimentRequest& request,
    const FCreateExperimentDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Experimentation/CreateExperiment"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabExperimentationAPI::OnCreateExperimentResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabExperimentationAPI::OnCreateExperimentResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FCreateExperimentDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    ExperimentationModels::FCreateExperimentResult outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabExperimentationAPI::DeleteExclusionGroup(
    ExperimentationModels::FDeleteExclusionGroupRequest& request,
    const FDeleteExclusionGroupDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Experimentation/DeleteExclusionGroup"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabExperimentationAPI::OnDeleteExclusionGroupResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabExperimentationAPI::OnDeleteExclusionGroupResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDeleteExclusionGroupDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    ExperimentationModels::FEmptyResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabExperimentationAPI::DeleteExperiment(
    ExperimentationModels::FDeleteExperimentRequest& request,
    const FDeleteExperimentDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Experimentation/DeleteExperiment"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabExperimentationAPI::OnDeleteExperimentResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabExperimentationAPI::OnDeleteExperimentResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDeleteExperimentDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    ExperimentationModels::FEmptyResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabExperimentationAPI::GetExclusionGroups(
    ExperimentationModels::FGetExclusionGroupsRequest& request,
    const FGetExclusionGroupsDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Experimentation/GetExclusionGroups"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabExperimentationAPI::OnGetExclusionGroupsResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabExperimentationAPI::OnGetExclusionGroupsResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetExclusionGroupsDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    ExperimentationModels::FGetExclusionGroupsResult outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabExperimentationAPI::GetExclusionGroupTraffic(
    ExperimentationModels::FGetExclusionGroupTrafficRequest& request,
    const FGetExclusionGroupTrafficDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Experimentation/GetExclusionGroupTraffic"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabExperimentationAPI::OnGetExclusionGroupTrafficResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabExperimentationAPI::OnGetExclusionGroupTrafficResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetExclusionGroupTrafficDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    ExperimentationModels::FGetExclusionGroupTrafficResult outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabExperimentationAPI::GetExperiments(
    ExperimentationModels::FGetExperimentsRequest& request,
    const FGetExperimentsDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Experimentation/GetExperiments"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabExperimentationAPI::OnGetExperimentsResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabExperimentationAPI::OnGetExperimentsResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetExperimentsDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    ExperimentationModels::FGetExperimentsResult outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabExperimentationAPI::GetLatestScorecard(
    ExperimentationModels::FGetLatestScorecardRequest& request,
    const FGetLatestScorecardDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Experimentation/GetLatestScorecard"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabExperimentationAPI::OnGetLatestScorecardResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabExperimentationAPI::OnGetLatestScorecardResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetLatestScorecardDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    ExperimentationModels::FGetLatestScorecardResult outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabExperimentationAPI::GetTreatmentAssignment(
    ExperimentationModels::FGetTreatmentAssignmentRequest& request,
    const FGetTreatmentAssignmentDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Experimentation/GetTreatmentAssignment"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabExperimentationAPI::OnGetTreatmentAssignmentResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabExperimentationAPI::OnGetTreatmentAssignmentResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FGetTreatmentAssignmentDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    ExperimentationModels::FGetTreatmentAssignmentResult outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabExperimentationAPI::StartExperiment(
    ExperimentationModels::FStartExperimentRequest& request,
    const FStartExperimentDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Experimentation/StartExperiment"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabExperimentationAPI::OnStartExperimentResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabExperimentationAPI::OnStartExperimentResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FStartExperimentDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    ExperimentationModels::FEmptyResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabExperimentationAPI::StopExperiment(
    ExperimentationModels::FStopExperimentRequest& request,
    const FStopExperimentDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Experimentation/StopExperiment"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabExperimentationAPI::OnStopExperimentResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabExperimentationAPI::OnStopExperimentResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FStopExperimentDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    ExperimentationModels::FEmptyResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabExperimentationAPI::UpdateExclusionGroup(
    ExperimentationModels::FUpdateExclusionGroupRequest& request,
    const FUpdateExclusionGroupDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Experimentation/UpdateExclusionGroup"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabExperimentationAPI::OnUpdateExclusionGroupResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabExperimentationAPI::OnUpdateExclusionGroupResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FUpdateExclusionGroupDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    ExperimentationModels::FEmptyResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}

bool UPlayFabExperimentationAPI::UpdateExperiment(
    ExperimentationModels::FUpdateExperimentRequest& request,
    const FUpdateExperimentDelegate& SuccessDelegate,
    const FPlayFabErrorDelegate& ErrorDelegate)
{
    FString entityToken = request.AuthenticationContext.IsValid() ? request.AuthenticationContext->GetEntityToken() : PlayFabSettings::GetEntityToken();
    if (entityToken.Len() == 0) {
        UE_LOG(LogPlayFabCpp, Error, TEXT("You must call GetEntityToken API Method before calling this function."));
    }


    auto HttpRequest = PlayFabRequestHandler::SendRequest(nullptr, TEXT("/Experimentation/UpdateExperiment"), request.toJSONString(), TEXT("X-EntityToken"), entityToken);
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &UPlayFabExperimentationAPI::OnUpdateExperimentResult, SuccessDelegate, ErrorDelegate);
    return HttpRequest->ProcessRequest();
}

void UPlayFabExperimentationAPI::OnUpdateExperimentResult(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FUpdateExperimentDelegate SuccessDelegate, FPlayFabErrorDelegate ErrorDelegate)
{
    ExperimentationModels::FEmptyResponse outResult;
    FPlayFabCppError errorResult;
    if (PlayFabRequestHandler::DecodeRequest(HttpRequest, HttpResponse, bSucceeded, outResult, errorResult))
    {
        SuccessDelegate.ExecuteIfBound(outResult);
    }
    else
    {
        ErrorDelegate.ExecuteIfBound(errorResult);
    }
}
