/**
 * Simple API to gather and rank questions during talks
 * This is a simple API
 *
 * OpenAPI spec version: 1.0.0
 * Contact: antony.guinard@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#include "SWGQuestion.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGQuestion::SWGQuestion(QString* json) {
    init();
    this->fromJson(*json);
}

SWGQuestion::SWGQuestion() {
    init();
}

SWGQuestion::~SWGQuestion() {
    this->cleanup();
}

void
SWGQuestion::init() {
    id = 0L;
    question = new QString("");
    votes = 0L;
}

void
SWGQuestion::cleanup() {
    

    if(question != nullptr) {
        delete question;
    }

}

SWGQuestion*
SWGQuestion::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGQuestion::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&id, pJson["id"], "qint64", "");
    ::Swagger::setValue(&question, pJson["question"], "QString", "QString");
    ::Swagger::setValue(&votes, pJson["votes"], "qint64", "");
}

QString
SWGQuestion::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGQuestion::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    obj->insert("id", QJsonValue(id));

    toJsonValue(QString("question"), question, obj, QString("QString"));

    obj->insert("votes", QJsonValue(votes));

    return obj;
}

qint64
SWGQuestion::getId() {
    return id;
}
void
SWGQuestion::setId(qint64 id) {
    this->id = id;
}

QString*
SWGQuestion::getQuestion() {
    return question;
}
void
SWGQuestion::setQuestion(QString* question) {
    this->question = question;
}

qint64
SWGQuestion::getVotes() {
    return votes;
}
void
SWGQuestion::setVotes(qint64 votes) {
    this->votes = votes;
}



} /* namespace Swagger */

