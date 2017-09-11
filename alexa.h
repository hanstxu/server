#ifndef ALEXA_H
#define ALEXA_H

// a simple json library
#include "libjson/JSONObject.h"
#include "libjson/JSONArray.h"

std::string getApplicationId(JSONObject req);

std::string getRequestType(JSONObject req);

std::string getIntentName(JSONObject req);

JSONObject createPlainText(std::string text);

JSONObject createResponse (std::string text);

JSONObject invokeSkill(JSONObject req);

#endif